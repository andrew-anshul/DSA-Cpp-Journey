#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> &arr, int n, int k)
{
    int low = 0, high = n - 1, first = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k)
        {
            first = mid;
            high = mid - 1; // Continue searching in the left half
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return first;
}

int lastOccurrence(vector<int> &arr, int n, int k)
{
    int low = 0, high = n - 1, last = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k)
        {
            last = mid;
            low = mid + 1; // Continue searching in the right half
        }
        else if (arr[mid] < k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return last;
}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{
    int first = firstOccurrence(arr, n, k);
    int last = lastOccurrence(arr, n, k);
    return {first, last};
}

// Example usage:
int main()
{
    vector<int> arr = {0, 1, 1, 5};
    int k = 1;
    pair<int, int> result = firstAndLastPosition(arr, arr.size(), k);
    cout << result.first << " " << result.second << endl; // Output: 1 2
    return 0;
}
