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
const int D = 1000; // DP - matrix dimension

int dp[D][D]; // DP matrix

int memoknapsack(int wt[], int val[],int w,int n){
    
    if(n==0 || w==0) return 0;
    if(dp[n][w]!= -1) return dp[n][w];
    else{
        if (wt[n - 1] <= w)
             dp[n][w] = max(val[n - 1] + memoknapsack(wt, val, w - wt[n - 1], n - 1), memoknapsack(wt, val, w, n - 1));
        else if (wt[n - 1] > w)
            dp[n][w] = memoknapsack(wt, val, w, n - 1);

        return dp[n][w];
    }
    
}
int main () {

    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= W; j++)
            dp[i][j] = -1; // initialize matrix with -1

    cout << memoknapsack(wt, val, W, n);
    return 0;
 
    return 0;
}