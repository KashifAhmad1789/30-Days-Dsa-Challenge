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

const int D = 1000; // DP - matrix dimension

int dp[D][D]; // DP matrix
int topdoownKnapsack(int wt[], int val[], int w, int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            if (i == 0 || j == 0) // base case // filling 1st row and 1st column of the matrix with zero as per the base condition of the recursive solution
                dp[i][j] = 0;
            else if (wt[i - 1] <= j)
            {                                                    // current wt can fit in bag // this is for the choice diagram of the recursive solution
                int val1 = val[i - 1] + dp[i - 1][j - wt[i - 1]]; // take current wt // and after taking weight substract the inserted weight from the final weight
                int val2 = dp[i - 1][j];                          // skip current wt
                dp[i][j] = max(val1, val2);
            }
            else if (wt[i - 1] > j)    // current wt doesn't fit in bag
                dp[i][j] = dp[i - 1][j]; // move to next
        }
    }

    return dp[n][w];
}
int main()
{

    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= W; j++)
            dp[i][j] = -1; // initialize matrix with -1

    cout << topdoownKnapsack(wt, val, W, n);
    return 0;
}