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

int friendspairing (int n){
// CODE HERE
if(n<=1) return 1;
int ans = friendspairing(n - 1) + (n - 1) *friendspairing(n-2);
return ans;
};
int main () {

// int arr[] = {1,2,3,4,5};
// int n = sizeof(arr) / sizeof(arr[0]);
int n = 3;
cout << friendspairing(3);

    return 0;
}