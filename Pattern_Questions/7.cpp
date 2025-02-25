#include <iostream>
using namespace std;
// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        for (int star = 1; star < 2 * i - 1; star++)
        {
            cout << "* ";
        }

        int j = 1;
        while (j <= n - i + 1)
        {
            cout << n - i - j + 2 << " ";
            j = j + 1;
        }

        cout << endl;
    }

    return 0;
}