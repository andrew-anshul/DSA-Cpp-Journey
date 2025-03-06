#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int k)
{

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == k)
        {
            return true;
        }
        if (k > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 5, 12, 23, 65, 233};
    int k;
    cin >> k;
    cout << endl;
    cout << binarySearch(arr, 6, k);
    return 0;
}