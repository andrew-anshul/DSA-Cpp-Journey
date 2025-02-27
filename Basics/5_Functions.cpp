#include <iostream>
using namespace std;

// Function Prototype (Declaration)
int add(int, int);
void greet();
void displayMessage(string);
float multiply(float, float);
int factorial(int);
inline int square(int);

// Main Function
int main()
{
    // Calling functions
    greet();

    int sum = add(5, 10);
    cout << "Sum: " << sum << endl;

    displayMessage("John");

    float product = multiply(4.5, 2.0);
    cout << "Multiplication: " << product << endl;

    int fact = factorial(5);
    cout << "Factorial: " << fact << endl;

    cout << "Square: " << square(6) << endl;

    return 0;
}

// Function Definitions

// Function with no parameters and no return value
void greet()
{
    cout << "Hello, Welcome to C++!" << endl;
}

// Function with parameters and no return value
void displayMessage(string name)
{
    cout << "Hello, " << name << "!" << endl;
}

// Function with parameters and return value
int add(int a, int b)
{
    return a + b;
}

// Function with parameters and return value
float multiply(float a, float b)
{
    return a * b;
}

// Recursive Function (Factorial)
int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

// Inline Function (Square)
inline int square(int x)
{
    return x * x;
}
