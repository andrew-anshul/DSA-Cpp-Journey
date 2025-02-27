#include <iostream>
using namespace std;
// Input = 123
// Output = 321
// if value outside the integer range then return 0;
int Reverse_Integer(int n)
{
    int ans = 0;
    while (n != 0)
    {
        if (ans > INT_MAX/10|| ans < INT_MIN/10)
        {
            return 0;
        }

        int digit = n % 10;
        ans = (ans * 10) + digit;
        n = n / 10;
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;
    int result = Reverse_Integer(n);
    cout << result;
    return 0;
}