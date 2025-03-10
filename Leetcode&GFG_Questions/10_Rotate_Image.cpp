#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        // Step 1: Reverse the matrix (flip vertically)
        reverse(matrix.begin(), matrix.end());
        
        // Step 2: Transpose the matrix (swap across the diagonal)
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = i + 1; j < matrix[i].size(); ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
};

// Function to print the matrix
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    cout << "Original Matrix:" << endl;
    printMatrix(matrix);
    
    Solution sol;
    sol.rotate(matrix);
    
    cout << "Rotated Matrix:" << endl;
    printMatrix(matrix);
    
    return 0;
}
