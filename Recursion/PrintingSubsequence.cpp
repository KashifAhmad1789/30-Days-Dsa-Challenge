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

void subsequence(int idx , vector<int> &ds, int arr[], int n){
    if(idx==n){
        for(auto it: ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[idx]);
    subsequence(idx + 1, ds, arr, n);
    ds.pop_back();
    subsequence(idx + 1, ds, arr, n);
    
}
int main () {

int arr[] = {3,1,2};
int n = sizeof(arr) / sizeof(arr[0]);
vector<int> ds;
subsequence(0, ds, arr, n);

return 0;
} 