#include <iostream>
using namespace std;
//      *    
//     ***
//    *****
//   *******
//  *********
//  *********
//   *******
//    *****
//     ***
//      *
void fun1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int space1 = 0; space1 < n - i -1; space1++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int space1 = 0; space1 < n - i-1; space1++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
void fun2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int space = 0; space < i ; space++)
        {
            cout << " ";
        }

        for (int j = 0; j <2*n -(2*i +1); j++)
        {
            cout << "*";
        }
        for (int space1 = 0; space1 < i ; space1++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    fun1(n);
    fun2(n);

    return 0;
}