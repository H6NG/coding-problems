/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
#include <utility>
using namespace std; 

struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int ans = 0;
    pair<int, int> dfs(TreeNode *root)
    {
        if (root == nullptr)
            return {0, 0};
        auto L = dfs(root->left);
        auto R = dfs(root->right);
        int sum = root->val + L.first + R.first;
        int cnt = 1 + L.second + R.second;
        if (sum / cnt == root->val)
            ans++;
        return {sum, cnt};
    }
    int averageOfSubtree(TreeNode *root)
    {
        dfs(root);
        return ans;
    }
};