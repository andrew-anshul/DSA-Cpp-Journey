#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                if (matrix[i][j] == target) {
                    return true;
                }
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    
    // Example matrix
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target;
    cout << "Enter the target number: ";
    cin >> target;

    // Search for the target in the matrix
    if (sol.searchMatrix(matrix, target)) {
        cout << "Target " << target << " found in the matrix.\n";
    } else {
        cout << "Target " << target << " not found in the matrix.\n";
    }

    return 0;
}
