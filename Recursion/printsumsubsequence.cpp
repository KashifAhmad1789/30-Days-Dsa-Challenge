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

void printsumsubsequance(int idx, vector<int> &ds, int cur_sum, int sum, int arr[], int n)
{
    // CODE HERE
    if (idx == n)
    {
        if (cur_sum == sum)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << endl;
        }
        return;
    }
    // take it condition
    ds.push_back(arr[idx]);
    cur_sum += arr[idx];

    printsumsubsequance(idx + 1, ds, cur_sum, sum, arr, n);

    // not take it condition
    cur_sum -= arr[idx];
    ds.pop_back();
    printsumsubsequance(idx + 1, ds, cur_sum, sum, arr, n);
};
int main()
{

    int arr[] = {1, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ds;
    int sum = 2;
    printsumsubsequance(0, ds, 0, sum, arr, n);

    return 0;
}