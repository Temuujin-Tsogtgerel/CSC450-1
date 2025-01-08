#include <iostream>
#include <conio.h>  // For getch()

// Standard namespace declaration
using namespace std;

// Main Function
int main()
{
    // Declare variables to store user inputs
    int value1, value2, value3;

    // Prompt the user for three integer inputs
    cout << "Enter the first integer value: ";
    cin >> value1;

    cout << "Enter the second integer value: ";
    cin >> value2;

    cout << "Enter the third integer value: ";
    cin >> value3;

    // Create integer pointers and dynamically allocate memory
    int* pointer1 = new int(value1);
    int* pointer2 = new int(value2);
    int* pointer3 = new int(value3);

    // Display the values stored in the variables
    cout << "\n--- Variable Values ---" << endl;
    cout << "Value 1: " << value1 << endl;
    cout << "Value 2: " << value2 << endl;
    cout << "Value 3: " << value3 << endl;

    // Display the addresses of the variables using & (address-of operator)
    cout << "\n--- Variable Addresses ---" << endl;
    cout << "Address of Value 1: " << &value1 << endl;
    cout << "Address of Value 2: " << &value2 << endl;
    cout << "Address of Value 3: " << &value3 << endl;

    // Display the values stored in the pointers using * (dereference operator)
    cout << "\n--- Pointer Values (Dereferencing) ---" << endl;
    cout << "Pointer 1 points to: " << *pointer1 << endl;
    cout << "Pointer 2 points to: " << *pointer2 << endl;
    cout << "Pointer 3 points to: " << *pointer3 << endl;

    // Display the addresses the pointers are holding (using the pointers themselves)
    cout << "\n--- Pointer Addresses ---" << endl;
    cout << "Address stored in Pointer 1: " << pointer1 << endl;
    cout << "Address stored in Pointer 2: " << pointer2 << endl;
    cout << "Address stored in Pointer 3: " << pointer3 << endl;

    // Free the dynamically allocated memory
    delete pointer1;
    delete pointer2;
    delete pointer3;

    // Set pointers to nullptr after deallocation
    pointer1 = nullptr;
    pointer2 = nullptr;
    pointer3 = nullptr;

    // Inform the user that the memory has been deallocated
    cout << "\nMemory deallocated. Program complete." << endl;

    // Pause before exiting
    cout << "Press any key to exit...";
    getch();  // Wait for user input

    return 0;
}
