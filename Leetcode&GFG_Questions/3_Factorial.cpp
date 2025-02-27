// Given a positive integer, n. Find the factorial of n.
// Examples :
// Input: n = 5
// Output: 120
// Explanation: 1 x 2 x 3 x 4 x 5 = 120

#include <iostream>
using namespace std;
int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << fact(n);
    return 0;
}