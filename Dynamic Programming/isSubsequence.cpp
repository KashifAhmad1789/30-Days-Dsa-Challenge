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

// Question --> https://leetcode.com/problems/is-subsequence/
class Solution
{
public:
    int LCS(string X, string Y, int n, int m)
    {
        int dp[n + 1][m + 1]; // DP - matrix

        // base case of recursion --> for initialization of dp - matrix
        for (int i = 0; i <= n; i++)
            for (int j = 0; j <= m; j++)
                if (i == 0 || j == 0)
                    dp[i][j] = 0;

        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
                if (X[i - 1] == Y[j - 1])
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);

        return dp[n][m];
    }
    bool SeqPatternMatching(string X, string Y, int n, int m)
    {
        return LCS(X, Y, n, m) == min(n, m);
    }

    bool isSubsequence(string s, string t)
    {
        int n = s.size();
        int m = t.size();
        if (n > m)
        {
            return false;
        }
        // return SeqPatternMatching(s,t, n, m) ? "true\n" : "false\n";
        if (SeqPatternMatching(s, t, n, m))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main () {


int prices[] = {7, 1, 5, 3, 6, 4};
int n = sizeof(prices) / sizeof(prices[0]);


 return 0;
}