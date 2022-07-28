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
// question --> https://leetcode.com/problems/container-with-most-water/
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int len = height.size();
        int l =0;
        int r = len -1;
        int area = 0;
        while (l<r)
        {
           area = max(area, min(height[l],height[r])*(r-1));
           if(height[l]<height[r]) l++;
           else r--;
        }
        return area;
        
    }
};
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    return 0;
}