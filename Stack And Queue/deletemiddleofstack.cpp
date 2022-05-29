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

void solve(stack<int>&inputStack, int count, int size){
    // base case
    if(count==size/2){
        inputStack.pop();
        return ;
    }
    int num = inputStack.top();
    inputStack.pop();
    solve(inputStack,count+1,size);
    inputStack.push(num);
   
}

void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
    int count = 0;
    solve(inputStack,count,N);
   
}