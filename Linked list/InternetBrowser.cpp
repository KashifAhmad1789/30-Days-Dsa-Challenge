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

class BrowserHistory {
public:
    list<string> history;
    list<string> :: iterator it;
    BrowserHistory(string homepage) {
        history.push_back(homepage);
        it = history.begin();
    }
    
    void visit(string url) {
        auto del = it;
        del++;
        history.erase(del,history.end());
        history.push_back(url);
        it++;
    }
    
    string back(int steps) {
        while(it!=history.begin() && steps--){
            it--;
        }
        return *it;
    }
    
    string forward(int steps) {
         while(it!=(--history.end()) && steps--){
            it++;
        }
        return *it;
    }
};

int main () {

int arr[] = {1,2,3,4,5};
int n = sizeof(arr) / sizeof(arr[0]);



return 0;
}