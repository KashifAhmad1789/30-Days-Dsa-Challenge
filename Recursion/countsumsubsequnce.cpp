// Question --> print all subsequence whose some is k

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

int printsumsubsequance(int idx,  int cur_sum, int sum, int arr[], int n)
{
    // CODE HERE
    if (idx == n)
    {
        if (cur_sum == sum) return 1;
              else return 0;
    }
    // take it condition
    
    cur_sum += arr[idx];

   int l =  printsumsubsequance(idx + 1, cur_sum, sum, arr, n);

    // not take it condition
    cur_sum -= arr[idx];

   int r =  printsumsubsequance(idx + 1,  cur_sum, sum, arr, n);
   return l+r;
};
int main()
{

    int arr[] = {1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
   
    int sum = 2;
    cout<<printsumsubsequance(0,  0, sum, arr, n);

    return 0;
}