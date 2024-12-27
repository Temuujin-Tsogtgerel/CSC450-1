#include <iostream>
#include <conio.h>
#include <cstring>  // For C-style string manipulation

// Standard namespace declaration
using namespace std;

// Main Function
int main()
{
    // Declare fixed-size char arrays to store the user's input strings
    char firstInput[10];  // Fixed buffer size of 10 characters
    char secondInput[10]; // Fixed buffer size of 10 characters
    char concatenatedResult[20]; // Fixed buffer for concatenation

    // Prompt the user and process inputs three times
    for (int i = 0; i < 3; i++)
    {
        // Ask the user for the first string
        cout << "Please enter the first string (Attempt " << i + 1 << "): ";
        cin.getline(firstInput, sizeof(firstInput));  // Read up to 9 characters (leaves room for null-terminator)

        // Ask the user for the second string
        cout << "Please enter the second string (Attempt " << i + 1 << "): ";
        cin.getline(secondInput, sizeof(secondInput));  // Read up to 9 characters

        // Vulnerable concatenation: No length checking for buffer overflow
        strcpy(concatenatedResult, firstInput);
        strcat(concatenatedResult, secondInput);

        // Output the concatenated result
        cout << "Here is the result of concatenation: " << concatenatedResult << endl;

        // Add a blank line for readability between attempts
        cout << endl;
    }

    // Output the message after all concatenations are done
    cout << "All concatenations are complete!" << endl;
    cout << "Press any key to exit...";

    // Wait for the user to press a key before closing the program
    getch();  // Wait for user input

    // Return statement to signal the program ended successfully
    return 0;
}
