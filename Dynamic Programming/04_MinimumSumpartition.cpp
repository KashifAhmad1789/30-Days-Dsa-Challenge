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
class Solution
{

public:
    vector<int> isSubsetPoss(int arr[], int n, int sum)
    {
        bool t[n + 1][sum + 1]; // DP - matrix
        // initialization
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= sum; j++)
            {
                if (i == 0)
                    t[i][j] = false;
                if (j == 0)
                    t[i][j] = true;
            }
        }
        // taking from the 2nd row and 2nd column
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= sum; j++)
            {
                if (arr[i - 1] <= j)
                    t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j]; // include or exclude
                else
                    t[i][j] = t[i - 1][j]; // exclude
            }
        }

        vector<int> v;                 // contains all subset sums possible with n elements // creating a vector varible to store all the element of the last row
        for (int j = 0; j <= sum; j++) // from the range we need to exclude the element which is not there in the existing problem
            if (t[n][j] == true)       // keep true to only those place whose subset sum exist
                v.push_back(j);        // store in the vector

        return v;
    }

    int MinSubsetSumDiff(int arr[], int n)
    {
        int range = 0;
        for (int i = 0; i < n; i++)
            range += arr[i]; // taking sum of the array for range

        vector<int> v = isSubsetPoss(arr, n, range);
        int mn = INT_MAX;
        for (int i = 0; i < v.size(); i++)       // iterating through the last row of the matrix
            mn = min(mn, abs(range - 2 * v[i])); // taking minimum from the last row

        return mn;
    }
    int minDifference(int arr[], int n)
    {
        // Your code goes here
        return MinSubsetSumDiff(arr, n);
    }
};

int main()
{

    int prices[] = {7, 1, 5, 3, 6, 4};
    int n = sizeof(prices) / sizeof(prices[0]);

    return 0;
}