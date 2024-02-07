
document.addEventListener('DOMContentLoaded', function () {
    var submitButton = document.getElementById('submit');

    submitButton.addEventListener('click', function () {
        var messageInput = document.getElementById('message');
        var message = messageInput.value;
        console.log('Message submitted:', message);
        chrome.runtime.sendMessage({ message: message });

    });
});
