#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int cnt = 1;
            while (i + 1 < n && arr[i] == arr[i + 1])
            {
                cnt++;
                i++;
            }
            v.push_back(cnt);
        }
        sort(v.begin(), v.end());
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] == v[i - 1])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution sol;
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    cout << boolalpha << sol.uniqueOccurrences(arr) << endl; // Expected output: true
    return 0;
}
