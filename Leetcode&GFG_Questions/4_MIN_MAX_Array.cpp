#include <iostream>
#include <climits>
using namespace std;
void min_max_Array(int arr[], int n)
{
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << "Maximum of Array is ";
    cout << max << endl;
    cout << "Minimum of Array is ";
    cout << min << endl;
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    //taking input in array
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    min_max_Array(arr, n);
    return 0;
}