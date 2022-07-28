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

vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) {
 long long i;
 long long j;
 vector<long long> ans;
 list<long long> l;
  while (j<N){
    if (A[j]<0) 
      l.push_back(A[j]);
    if (j-i+1<K) j++;
    else if ((j-i+1)==K)
    {
      if (l.size()==0)
        ans.push_back(0);
      else
        ans.push_back(l.front());
      if(A[i]<0)
        l.pop_front();
      i++;
      j++;
    }
  }
  return ans;
}
int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}