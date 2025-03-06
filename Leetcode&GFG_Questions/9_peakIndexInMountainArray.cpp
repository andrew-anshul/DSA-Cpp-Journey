#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left = 0, right = arr.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] < arr[mid + 1]) {
                // If mid element is smaller than the next one, peak is on the right side
                left = mid + 1;
            } else {
                // Otherwise, peak is on the left side (or at mid)
                right = mid;
            }
        }
        return left; // or return right, both point to the peak index
    }
};

int main() {
    Solution sol;
    vector<int> arr = {1, 3, 5, 6, 4, 2};  // Example mountain array

    int peakIndex = sol.peakIndexInMountainArray(arr);
    cout << "Peak Index: " << peakIndex << endl;

    return 0;
}
