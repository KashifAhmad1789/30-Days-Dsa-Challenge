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
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start = 0;
        int end = n-1;
        while(start<end){
            int mid = start + (end - start)/2;
            if(arr[mid]<arr[mid+1]) start = mid+1;
            else end = mid;
        }
        return start;
    }
};
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}