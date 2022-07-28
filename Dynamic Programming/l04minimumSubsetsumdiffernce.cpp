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

vector<int> issubsetpossible(int arr[], int n , int sum){
    bool t[n+1][sum+1];
    for(int i =0;i<=n;i++){
        for(int j =0;j<=sum;j++){
            if(i==0) t[i][j] = false;
            if(j==0) t[i][j] = true;
        }
    }
for(int i =0;i<=n;i++){
    for(int j = 0;j<=sum;j++){
        if(arr[i-1]<=j){
            t[i][j] = t[i-1][j-arr[i-1]] || t[i-1][j];
           

        }
        else  t[i-1][j];
    }
}
vector<int> v;                 
for (int j = 0; j <= sum; j++) 
    if (t[n][j] == true)       
        v.push_back(j);       

return v;
}
int minsubset(int arr[], int n){
    int range = 0;
    for(int i =0;i<n;i++){
        range = range+arr[i];

    }
    vector<int> v = issubsetpossible(arr, n , range);
    int mn = INT_MAX;
    for(int i =0;i<v.size();i++){
        mn = min(mn,range  - 2*v[i]);
    }
    return mn ;
}
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}