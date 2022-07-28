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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root==NULL) return result;
        queue<TreeNode*> nodesqueue;
        nodesqueue.push(root);
        bool lefttoright = true;
        while(!nodesqueue.empty()){
            int size = nodesqueue.size();
            vector<int> row(size);
            for(int i =0;i<size;i++){
                TreeNode* node = nodesqueue.front();
                nodesqueue.pop();
                
                int index = (lefttoright) ? i : (size-1-i);
                row[index] = node->val;
                if(node->left) nodesqueue.push(node->left);
                if(node->right) nodesqueue.push(node->right);
                
            }
            lefttoright =! lefttoright;
            result.push_back(row);
        }
        return result;
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}