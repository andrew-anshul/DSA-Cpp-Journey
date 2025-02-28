#include <iostream>
#include <vector>
using namespace std;
std::vector<int> intersectionArray(int arr1[], int arr2[], int n)
{
    int i = 0;
    int j = 0;
    std::vector<int> ans;
    while (i < n && j < n)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}
int main()
{

    int arr1[5] = {1, 2, 2, 3, 5};
    int arr2[5] = {2, 2, 3, 4, 5};

    std::vector<int> result = intersectionArray(arr1, arr2, 5);

    // Print the result (intersection of the arrays)
    std::cout << "Intersection: ";
    for (int num : result)
    {
        std::cout << num << " ";
    }
    return 0;
}