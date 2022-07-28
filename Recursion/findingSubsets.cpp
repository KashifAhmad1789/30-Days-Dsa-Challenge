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

void findsubsets (char *input, char *output, int i, int j){
// CODE HERE
if(input[i]=='\0'){
    output[j] = '\0';
    if(output[0]=='\0'){
        cout<<"NULL";
    }
    cout<<output<<endl;
    return;
}
 // recursive case
 // include ith letter
 output[j] = input[i];
 findsubsets(input, output, i+1, j+1);
 // exclude the ith letter
 findsubsets(input, output, i+1, j);

};
int main () {

char input[100];
char output[100];
cin>> input;
findsubsets(input, output,0,0);



return 0;
}