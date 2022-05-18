#include <bits/stdc++.h>
using namespace std;
#define ll long long

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

    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> preorder;
        if(root==NULL) return preorder;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            root= st.top();
            st.pop();
            preorder.push_back(root->val);
            if(root->right!= NULL){
                st.push(root->right);
            }
            if(root->left!= NULL){
                st.push(root->left);
            }
        }
        return preorder;
        
        
        
    }
    // Recursion approach

    vector<int> d;
    void preorder(TreeNode *node)
    {
        if (node == NULL)
            return;
        d.push_back(node->val);
        preorder(node->left);
        preorder(node->right);
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}