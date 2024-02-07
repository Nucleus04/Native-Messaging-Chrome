# Native-Messaging-Chrome
Native Messaging implementation in chrome.

# Chrome Extension with Native App Integration

This project consists of a Chrome extension and a native application. The Chrome extension allows for seamless communication with the native application, enhancing functionality beyond what is possible within the browser environment alone.

## Chrome Extension

All files located at the root directory of this repository pertain to the Chrome extension. To utilize the extension, follow these steps:

1. **Load Extension in Chrome**: To use the Chrome extension, load it into your Chrome browser. You can do this by navigating to [chrome://extensions/](chrome://extensions/) and enabling "Developer mode." Then, click on "Load unpacked" and select the root directory of this repository.

## Native Application

The `nativeapp` directory contains the C++ project for the native application, which acts as the host app for the Chrome extension. Here's how to set it up:

1. **Compile the Native App**: Compile the C++ project located in the `nativeapp` directory. You can find the main executable file inside the `Native App Test/x64/Debug` directory after compilation.

2. **Register the Native App**: Utilize the provided registry file (`reg file configuration`) in the `nativeapp` directory to register the native application on your system. This step ensures that the Chrome extension can communicate with the native app.

## Communication

When the Chrome extension sends a message to the native application, the following process occurs:

1. **Message Reception**: The native application catches the message sent by the Chrome extension.

2. **Message Logging**: The received message is written to a text file named "received_messages.txt" within the `Debug` folder of the native application.

3. **Response to Extension**: The native application formulates a response message, which is then sent back to the Chrome extension.

This seamless communication between the Chrome extension and the native application enhances the functionality and capabilities of the overall system.

## Setting Up the Project

Follow these steps to set up and configure the project:

1. **Clone the Repository**: Clone this repositository

2. **Install the Chrome Extension**:
- Open Google Chrome and navigate to [chrome://extensions/](chrome://extensions/).
- Turn on "Developer mode" in the top right corner.
- Click on "Load unpacked" and select the directory of the cloned repository.

3. **Configure the Native Application**:
- Navigate to the `nativeapp` directory within the cloned repository.
- Locate the `.reg` file and open it in a text editor.
- Modify the path of the file included in the `.reg` file according to your computer's path.
- Save the changes and double-click the `.reg` file to add it to your Windows registry.

4. **Locate the Executable File**:
- The main executable file for the native application can be found at:
  `nativeapp/Native App test/x64/Debug`
- Run the executable to start the native application.

5. **Testing**:
- You can now test the interaction between the Chrome extension and the native application.
- Messages sent from the Chrome extension will be logged in the `receive_message.txt` file located in the `Debug` directory of the native application.

6. **Done!**: With these steps completed, your setup is now ready for use.
