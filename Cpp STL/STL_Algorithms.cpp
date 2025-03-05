#include <iostream>
#include <algorithm>  // For STL algorithms
#include <vector>     // For vector container

using namespace std;

int main() {
    // Creating a vector of integers
    vector<int> v;
    
    // Inserting elements into the vector
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    // **1. Binary Search**
    // Checks if element 6 exists in the vector
    // Returns `true (1)` if found, otherwise `false (0)`
    cout << "Finding 6 -> " << binary_search(v.begin(), v.end(), 6) << endl;

    // **2. Lower Bound**
    // Returns the index of the first element that is >= 6
    cout << "Lower Bound of 6 -> " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;

    // **3. Upper Bound**
    // Returns the index of the first element that is > 4
    cout << "Upper Bound of 4 -> " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    // **4. Finding Maximum & Minimum**
    int a = 3, b = 5;
    cout << "Max -> " << max(a, b) << endl;  // Returns max of `a` and `b`
    cout << "Min -> " << min(a, b) << endl;  // Returns min of `a` and `b`

    // **5. Swapping two values**
    swap(a, b);
    cout << "After swapping, a -> " << a << ", b -> " << b << endl;

    // **6. Reversing a String**
    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end());
    cout << "Reversed String -> " << abcd << endl;

    // **7. Rotating a Vector**
    // Rotates vector elements left by 1 position
    rotate(v.begin(), v.begin() + 1, v.end());

    cout << "After Rotate: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    // **8. Sorting a Vector**
    // Sorts the vector in ascending order
    sort(v.begin(), v.end());

    cout << "After Sorting: ";
    for (int i : v) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
