#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
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

int maximumwidthBinaryTree(TreeNode* root)
{
    // CODE HERE
    if (root == NULL)
        return 0;
    
    int ans = 0;
    queue<pair<TreeNode*, int>> q;

q.push({root,0});
while(!q.empty()){
    int size = q.size();
    int first , last;
    int mmin = q.front().second;
    for(int i =0;i<size;i++){
        int cur_id = q.front().second - mmin;
        TreeNode* node = q.front().first;
        q.pop();
        if(i==0) first = cur_id;
        if(i==size-1) last = cur_id;
        if(node->left)  q.push({node->left, cur_id*2+1});
        if(node->right)  q.push({node->right, cur_id*2+2});

    }
    ans = max(ans,last-first+1);
    
    

}
return ans;
};
int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    return 0;
}