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
void sorattStack(stack<int> &s, int num)
{
    // base case
    if (s.empty() || (!s.empty() && s.top() < num))
    {
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();
    // recursive call
    sorattStack(s, num);
    s.push(n);
}
stack<int> sortStack(stack<int> &s)
{
    // Write code here.
    if (s.empty())
        return ;
    int num = s.top();
    s.pop();
    sortStack(s);
    sorattStack(s, num);
}
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}