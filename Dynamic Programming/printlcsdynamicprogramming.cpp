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

string printlcs(string x , string y, int n, int m){
    int dp[n+1][m+1];
    for(int i =0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0) dp[i][j] =0;
        }
    }

    for(int i =1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(x[i-1]==y[j-1]) dp[i][j] =1 + dp[i-1][j-1];
            else 
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
        }
    }
    
    int i=n, j=m;
    string lcs = "";
    while(i>0 && j>0){
        if(x[i-1]==y[j-1]){
            lcs +=x[i-1];
            i--;
            j--;
        }else{
            if (dp[i][j - 1] > dp[i-1][j]) j--;
            else i--;
        }
    }
    reverse(lcs.begin(), lcs.end());
    return lcs;
};




int main () {

    string X, Y;
    cin >> X >> Y;
    int n = X.length(), m = Y.length();

    cout << printlcs(X, Y, n, m) << endl;
    return 0;
}