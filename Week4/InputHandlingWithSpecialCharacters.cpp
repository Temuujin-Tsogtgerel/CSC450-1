#include <iostream>

int main() {
    std::string userInput;
    std::cout << "What is Mr.Musk's new child's name?";
    std::cin >> userInput;

    // This could misinterpret escape sequences
    std::cout << "You entered: " << userInput << std::endl;

    return 0;
}
