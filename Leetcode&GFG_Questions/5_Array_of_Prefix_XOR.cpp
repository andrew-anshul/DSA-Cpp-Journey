// Find The Original Array of Prefix Xor
// You are given an integer array pref of size n. Find and return the array arr of size n that satisfies:

// pref[i] = arr[0] ^ arr[1] ^ ... ^ arr[i].
// Note that ^ denotes the bitwise-xor operation.

// It can be proven that the answer is unique.

// Example 1:
// Input: pref = [5,2,0,3,1]
// Output: [5,7,2,3,2]
// Explanation: From the array [5,7,2,3,2] we have the following:
// - pref[0] = 5.
// - pref[1] = 5 ^ 7 = 2.
// - pref[2] = 5 ^ 7 ^ 2 = 0.
// - pref[3] = 5 ^ 7 ^ 2 ^ 3 = 3.
// - pref[4] = 5 ^ 7 ^ 2 ^ 3 ^ 2 = 1.

// Example 2:
// Input: pref = [13]
// Output: [13]
// Explanation: We have pref[0] = arr[0] = 13.

#include <iostream>
#include <vector>

using namespace std;

// Function to find the original array from the prefix XOR array
vector<int> findArray(vector<int>& pref) {
    int n = pref.size();
    vector<int> arr(n);

    // First element is the same as the first element of pref
    arr[0] = pref[0];

    // Use XOR to compute each subsequent element of arr
    for (int i = 1; i < n; i++) {
        arr[i] = pref[i] ^ pref[i - 1];
    }

    return arr;
}

// Main function to test the solution
int main() {
    // Sample input
    vector<int> pref = {5, 2, 0, 3, 1};

    // Call the function to find the original array
    vector<int> arr = findArray(pref);

    // Output the result
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
