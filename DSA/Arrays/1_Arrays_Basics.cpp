#include <iostream> 
using namespace std; 

// Function to take user input and initialize the array
void initialize(int arr[], int n) {
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Taking input for each element
    }
}

// Function to print the array elements
void printArray(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Printing each element
    }
    cout << endl; // New line for better formatting
}

// Main function
int main() {
    int arr[100]; // Declare an array of size 100 (Maximum possible size)
    int n;        // Variable to store array size

    cout << "Enter the number of elements: ";
    cin >> n; // Taking input for the size of the array

    // Validating array size to prevent invalid input
    if (n > 100 || n <= 0) {
        cout << "Invalid array size! Enter a value between 1 and 100." << endl;
        return 1; // Exit the program with an error code
    }

    initialize(arr, n); // Function call to initialize the array
    printArray(arr, n); // Function call to print the array

    return 0; 
}
