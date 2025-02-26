#include <iostream>
using namespace std;

int main() {
    unsigned int a = 5;  // Binary: 0101
    unsigned int b = 3;  // Binary: 0011
    unsigned int result;

    // Bitwise AND
    result = a & b;  // 0101 & 0011 = 0001 (1 in decimal)
    cout << "a & b = " << result << endl;

    // Bitwise OR
    result = a | b;  // 0101 | 0011 = 0111 (7 in decimal)
    cout << "a | b = " << result << endl;

    // Bitwise XOR
    result = a ^ b;  // 0101 ^ 0011 = 0110 (6 in decimal)
    cout << "a ^ b = " << result << endl;

    // Bitwise NOT
    result = ~a;  // ~0101 = 1010 (inverts all bits, but depends on integer size)
    cout << "~a = " << result << endl;

    // Left Shift
    result = a << 1;  // 0101 << 1 = 1010 (10 in decimal)
    cout << "a << 1 = " << result << endl;

    // Right Shift
    result = a >> 1;  // 0101 >> 1 = 0010 (2 in decimal)
    cout << "a >> 1 = " << result << endl;

    return 0;
}