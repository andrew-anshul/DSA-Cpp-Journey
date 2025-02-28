#include <iostream>
using namespace std;
void sort0s1s(int arr[], int n)
{
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        while (arr[left] == 0 && left < right)
        {
            left++;
        }
        while (arr[right] == 1 && left < right)
        {
            right--;
        }
        // if (left<right)
        if (arr[left] == 1 && arr[right] == 0)
        {
            swap(arr[left], arr[right]);
        }
        left++;
        right--;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n] = {};
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort0s1s(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}