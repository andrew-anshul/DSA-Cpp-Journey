#include <iostream>
using namespace std;

bool findKey(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[10] = {5, 21, 23, 15, 45, 86, 12, 6, 9, 55};
    int key;
    cin >> key;
    int found = findKey(arr, 10, key);
    if (found == true)
    {
        cout << "Key is present"<<endl;
    }
    else
    {
        cout << "Key is absent"<<endl;
    }

    return 0;
}