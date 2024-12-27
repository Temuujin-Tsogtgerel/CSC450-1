#include <iostream>
#include <string>
#include <cstring>

int main() {
    // Safe string concatenation with std::string
    std::string safeStr = "Hello, Secure C++ World!";
    std::cout << safeStr << std::endl;

    // Bounds-checked C-style string handling
    char source[10] = "Secure", dest[15] = {};
    strncpy(dest, source, sizeof(dest) - 1);
    std::cout << "C-Style String: " << dest << std::endl;

    // Input validation
    std::string userInput;
    std::cout << "Enter input (max 10 chars): ";
    std::getline(std::cin, userInput);
    std::cout << "Processed: " << userInput.substr(0, 10) << std::endl;

    return 0;
}
