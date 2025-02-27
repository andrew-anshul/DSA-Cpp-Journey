// Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

// Example :
// Input: n = 1
// Output: 3

// Explanation:
// The input binary string 1011 has a total of three set bits.
#include <iostream>
using namespace std;

int NumberofsetBits(int n)
{
    int ans = 0;
    while (n)
    {
        if (n&1)
        {
            ans++;
        }
        n = n >> 1;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    int result = NumberofsetBits(n);
    cout << result;
    return 0;
}