
#include <string.h> 
#include <iostream>
#include <fstream>

int main() {
    std::ofstream outFile("received_messages.txt");

    if (!outFile.is_open()) {
        std::cerr << "Error opening file!" << std::endl;
        return 1; // Return with an error code if the file couldn't be opened
    }
    while (1) {

        //This variable will hold the length of message that will be recieved
        unsigned int length = 0;


        for (int i = 0; i < 4; i++)
        {
            unsigned int read_char = getchar();
            length = length | (read_char << i * 8);
        }
        //read the json-message
        std::string msg = "";
        for (int i = 0; i < length; i++)
        {
            msg += getchar();
        }
        std::string message = "{\"text\":\"This is a response message\"}";
        // Collect the length of the message
        unsigned int len = message.length();
        // Now we can output our message
        if (msg == "{\"text\":\"#STOP#\"}") {
            message = "{\"text\":\"EXITING...\"}";
            len = message.length();
            std::cout << char(len >> 0)
                << char(len >> 8)
                << char(len >> 16)
                << char(len >> 24);
            std::cout << message;
            break;
        }

        // return stdin message
        
        outFile << msg << std::endl;

        std::string response = "{\"response\":\"Message received successfully\"}";
        unsigned int resplen = response.length();
        std::cout << char(resplen >> 0)
            << char(resplen >> 8)
            << char(resplen >> 16)
            << char(resplen >> 24);
        std::cout << response << std::flush;
        //len = length;
        //std::cout << char(len >> 0)
        //    << char(len >> 8)
        //    << char(len >> 16)
        //    << char(len >> 24);
        //std::cout << msg << std::flush;
    }

    outFile.close();
    return 0;
}