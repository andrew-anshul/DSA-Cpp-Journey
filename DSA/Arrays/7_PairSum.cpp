#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s) {
   vector<vector<int>> ans;
   
   for (int i = 0; i < arr.size(); i++) {
     for (int j = i + 1; j < arr.size(); j++) {
       if (arr[i] + arr[j] == s) {
         vector<int> temp;
         temp.push_back(min(arr[i], arr[j]));
         temp.push_back(max(arr[i], arr[j]));
         ans.push_back(temp);
       }
     }
   }

   // Sort pairs after collecting all of them
   sort(ans.begin(), ans.end());
   
   return ans;
}

int main() {
    // Example input
    vector<int> arr = {1, 2, 3, 4, 5};
    int targetSum = 6;
    
    // Get pairs that sum up to the target
    vector<vector<int>> result = pairSum(arr, targetSum);

    // Print the result
    cout << "Pairs that sum to " << targetSum << " are:" << endl;
    for (auto &pair : result) {
        cout << "(" << pair[0] << ", " << pair[1] << ")" << endl;
    }

    return 0;
}
