#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
/********************************** Boiler Plate End  ***********************************************************/

// Main code Start Here

int mazePath(int sr, int sc, int er, int ec, string psf)
{

    if (sr == er && sc == ec)
    {
        cout << psf;
        return 1;
    }
    int count = 0;
    if (sc + 1 <= ec)
        count += mazePath(sr, sc + 1, er, ec, psf + "h"); // H
    if (sr + 1 <= er)
        count += mazePath(sr + 1, sc, er, ec, psf + "v"); // V
    if (sc + 1 <= ec && sr + 1 <= er)
        count += mazePath(sr + 1, sc + 1, er, ec, psf + "d"); // D
    return count;
}

int mazePath2(int sr, int sc, int er, int ec, int , string[] dirs, string psf)
{

    if (sr == er && sc == ec)
    {
        cout << psf;
        return 1;
    }
    int count = 0;
    for (int d = 0; d < dir.size(); d++)
    {
        int r = sr + dir[d][0];
        int c = sc + dir[d][1];
        if (r >= 0 && c >= 0 && r <= er && c <= ec)
        {
            count += mazePath2(r, c, er, ec, dir, dirs, psf + dirs[d]);
        }
        return count;
    }
}
int main()
{
    int dir[3][2] = {{0, 1}, {1, 0}, {1, 1}};
    int dirs[3] = {'h', 'v', 'd'};
    cout << mazePath2(0, 0, 2, 2, dir, dirs, " ") << endl;

    return 0;
}