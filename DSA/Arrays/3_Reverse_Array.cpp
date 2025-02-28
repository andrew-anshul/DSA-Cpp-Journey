#include <iostream>
using namespace std;
void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        // swap(arr[start], arr[end]);
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10] = {5, 21, 23, 15, 45, 86, 12, 6, 9, 55};
    reverseArray(arr, 10);
    printArray(arr, 10);
    return 0;
}