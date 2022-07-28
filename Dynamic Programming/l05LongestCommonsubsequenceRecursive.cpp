// Recursive Approach


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

class Solution {
public:
    int longestCommonSubsequence2(string text1, string text2, int n, int m){
        int count = 0;
        if(n==0 || m==0) return 0;
        
        if(text1[n-1]==text2[m-1])
            return 1 + longestCommonSubsequence2( text1,  text2, n-1, m-1);
        else
            return max(longestCommonSubsequence2(text1, text2, n - 1, m), longestCommonSubsequence2(text1, text2, n, m - 1));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        int res = longestCommonSubsequence2(text1, text2, n , m);
        return res;
        
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}