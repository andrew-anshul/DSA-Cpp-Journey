#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans = 1;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[ans] = nums[i];
                ans++;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    Solution sol;
    int newSize = sol.removeDuplicates(nums);
    
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}
