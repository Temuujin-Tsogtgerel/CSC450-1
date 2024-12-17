#include <iostream>
#include <conio.h>
#include <string>  // For handling strings

// Standard namespace declaration
using namespace std;

// Main Function
int main()
{
    // Declare variables to store the user's input strings
    string firstInput, secondInput, concatenatedResult;

    // Prompt the user and process inputs three times
    for (int i = 0; i < 3; i++)
    {
        // Ask the user for the first string
        cout << "Please enter the first string (Attempt " << i + 1 << "): ";
        getline(cin, firstInput);  // Get the first string, including spaces

        // Ask the user for the second string
        cout << "Please enter the second string (Attempt " << i + 1 << "): ";
        getline(cin, secondInput);  // Get the second string, including spaces

        // Concatenate the two strings
        concatenatedResult = firstInput + secondInput;

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
