/* Simple C++ Program to Display a Person's Information */

#include <iostream>
#include <conio.h>

// Standard namespace declaration
using namespace std;

// Main Function
int main()
{
    // Define variables for the person's information
    string firstName = "First Name"; // Person's First Name
    string lastName = "Last Name"; // Person's Last Name
    string streetAddress = "Street Address"; // Person's Street Address
    string city = "City"; // Person's City
    int zipCode = 12345; // Person's Zip Code

    // Standard Output Statement
    cout << "--- Person Information ---" << endl;
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Street Address: " << streetAddress << endl;
    cout << "City: " << city << endl;
    cout << "Zip Code: " << zipCode << endl;

    // Wait for output screen
    getch();

    // Main Function return Statement
    return 0;
}