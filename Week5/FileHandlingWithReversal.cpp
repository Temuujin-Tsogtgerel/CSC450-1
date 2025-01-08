#include <iostream>
#include <fstream>
#include <string>
#include <algorithm> // For std::reverse

// Function to reverse the content of a file
void reverseFileContent(const std::string& inputFile, const std::string& outputFile) {
    std::ifstream inFile(inputFile);
    if (!inFile) {
        std::cerr << "Error opening input file: " << inputFile << std::endl;
        return;
    }

    std::string content((std::istreambuf_iterator<char>(inFile)), std::istreambuf_iterator<char>());
    inFile.close();

    // Reverse the content
    std::reverse(content.begin(), content.end());

    // Write reversed content to the output file
    std::ofstream outFile(outputFile);
    if (!outFile) {
        std::cerr << "Error creating output file: " << outputFile << std::endl;
        return;
    }
    outFile << content;
    outFile.close();
    std::cout << "Reversed content has been written to " << outputFile << std::endl;
}

int main() {
    const std::string fileName = "Week5/CSC450_CT5_mod5.txt";
    const std::string reversedFileName = "Week5/CSC450-mod5-reverse.txt";

    std::ofstream outFile(fileName, std::ios::app); // Open in append mode
    if (!outFile) {
        std::cerr << "Error opening file: " << fileName << std::endl;
        return 1;
    }

    std::string userInput;
    std::cout << "Enter text to append to the file: ";
    std::getline(std::cin, userInput);

    outFile << userInput << std::endl; // Append user input to the file
    outFile.close();

    std::cout << "Your input has been saved to " << fileName << std::endl;

    // Reverse the content of the file and save it to another file
    reverseFileContent(fileName, reversedFileName);

    return 0;
}
