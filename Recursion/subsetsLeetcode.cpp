#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct ListNode
{
int val;
ListNode *next;
ListNode() : val(0), next(nullptr){}
ListNode(int x) : val(x), next(nullptr){}
ListNode(int x, ListNode *next) : val(x), next(next){}
};
struct TreeNode {
int val;
TreeNode *left;
TreeNode *right;
TreeNode() : val(0), left(nullptr), right(nullptr) {}
TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
/********************************** Boiler Plate End  ***********************************************************/

// Main code Start Here

class Solution {
public:
    // it is use to store answer
    vector<vector<int>> ans;
    
    // solve function for generating answer
    void solve(int i, vector<int>&arr, vector<int>&temp)
    {
        if(i == arr.size()) // if index reaches the size of the array 
        {
            //if we find out a possibility, push it into the answer array
            ans.push_back(temp);
            return;
        }
        
        // taking ith element
        temp.push_back(arr[i]);
        
        // call for the next index
        solve(i + 1, arr, temp);
        
        // not taking ith ele,so first pop that already pushed ele, and then call for next index and generating the next possibility
        temp.pop_back();
        
        // calling for next index
        solve(i + 1, arr, temp);
        
    }
    vector<vector<int>> subsets(vector<int>& arr) {
        ans.clear(); // clear global array
        
        vector<int> temp; // temporary array for generating answer
        solve(0, arr, temp); // generating all possibility
        
        return ans;
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}