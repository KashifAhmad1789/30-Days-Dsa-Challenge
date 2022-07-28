#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
/********************************** Boiler Plate End  ***********************************************************/

// Main code Start Here

class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {

        // brute force
        vector<int> nge(nums.size(), -1);
        for (int i = 0; i < nums.size(); i++)
        {
            int j = (i + 1) % nums.size();
            while (j != i)
            {
                if (nums[j] > nums[i])
                {
                    nge[i] = nums[j];
                    break;
                }
                j = (j + 1) % nums.size();
            }
        }
        return nge;
    }
}; 
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    return 0;
}