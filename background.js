// Establish a port to communicate with the native app
let port = chrome.runtime.connectNative('com.example.native_my_app');

// Listen for messages from the extension popup or content scripts
chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
    console.log("Received message from extension:", message);
    // Send message to native app
    port.postMessage(message);
});

// Listen for messages from the native app
port.onMessage.addListener((message) => {
    console.log("Received message from native app:", message);
    // Process message from native app if needed
});

// Handle errors
port.onDisconnect.addListener(() => {
    console.error("Disconnected from native app.");
});
