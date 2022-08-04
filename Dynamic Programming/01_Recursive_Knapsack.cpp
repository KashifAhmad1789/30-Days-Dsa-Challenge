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


int recursiveknapsack(int wt[], int val[], int w, int n){
    if(n==0 || w==0) return 0;
    if(wt[n-1]<=w)
        return max(val[n - 1] + recursiveknapsack(wt, val, w - wt[n - 1], n - 1), recursiveknapsack(wt, val, w , n - 1));
    else if(wt[n-1]>w)
        return recursiveknapsack(wt, val, w, n - 1);
    else return -1;
}
int main () {
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    cout << recursiveknapsack(wt, val, W, n);
    return 0;
}