#include <iostream>
using namespace std;

int main()
{
    // BASIC DATA TYPES AND VARIABLES

    // Integer (whole numbers)
    int age = 25; // Typically 4 bytes

    // Floating point (decimal numbers)
    float price = 19.99;       // Single precision, about 4 bytes
    double salary = 1234.5678; // Double precision, about 8 bytes

    // Character (single characters)
    char grade = 'A'; // 1 byte

    // Boolean (true/false)
    bool isStudent = true; // 1 byte

    // String (sequence of characters)
    string name = "John"; // Size varies

    // ARITHMETIC OPERATORS
    int a = 10, b = 3;
    int sum = a + b;        // Addition: 13
    int difference = a - b; // Subtraction: 7
    int product = a * b;    // Multiplication: 30
    int quotient = a / b;   // Division: 3 (integer division)
    int remainder = a % b;  // Modulus (remainder): 1

    // COMPARISON OPERATORS
    bool isEqual = (a == b);        // Equal to: false
    bool notEqual = (a != b);       // Not equal to: true
    bool greater = (a > b);         // Greater than: true
    bool less = (a < b);            // Less than: false
    bool greaterOrEqual = (a >= b); // Greater than or equal: true
    bool lessOrEqual = (a <= b);    // Less than or equal: false

    // LOGICAL OPERATORS
    bool andResult = (true && false); // AND: false
    bool orResult = (true || false);  // OR: true
    bool notResult = (!true);         // NOT: false

    // OUTPUT EXAMPLES
    cout << "Integer: " << age << endl;
    cout << "Float: " << price << endl;
    cout << "Double: " << salary << endl;
    cout << "Char: " << grade << endl;
    cout << "Bool: " << isStudent << endl; // Prints 1 for true
    cout << "String: " << name << endl;
    cout << "Sum: " << sum << endl;
    cout << "Greater than: " << greater << endl;

    return 0;
}