#include <iostream>
#include <string>

void accessGranted();
void accessDenied();
bool checkPassword(const std::string& userInput);

int main() {
    std::cout << "Please enter the password to access the secure system: ";
    std::string userInput;
    std::getline(std::cin, userInput);

    if (checkPassword(userInput)) {
        accessGranted();
    } else {
        accessDenied();
    }

    return 0;
}

void accessGranted() {
    std::cout << "Access Granted. Welcome to the secure area." << std::endl;
    std::string secretMessage = "The nuclear launch codes are: Hamburger Banana";
    std::cout << "Secret Information: " << secretMessage << std::endl;
}

void accessDenied() {
    std::cout << "\n[-] Access Denied. Incorrect password." << std::endl;
}

bool checkPassword(const std::string& userInput) {
    const std::string correctPassword = "cysLFHNW25!123";
    
    if (userInput.length() != correctPassword.length()) {
        return false;
    }

    for (int i = 0; i < correctPassword.length(); ++i) {
        if (userInput[i] != correctPassword[i]) {
            return false;
        }
    }

    return true;
}

