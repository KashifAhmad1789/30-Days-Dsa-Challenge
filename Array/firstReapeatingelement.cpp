#include <bits/stdc++.h>
using namespace std;
#define ll long long

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
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
        // code here
         map<int,int> mp;
        for(int i = 0;i<n;i++)
            mp[arr[i]]++;
            
        for(int i = 0;i<n;i++)
            if(mp[arr[i]] > 1)
                return i+1;
        return -1;
    }
};
int main () {

    int arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << duplicate(arr,n);
     return 0;
}