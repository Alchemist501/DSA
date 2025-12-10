/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
 public:
  bool isSymmetric(TreeNode* root) {
    queue<vector<TreeNode*>> q;
    q.push({root->left, root->right});
    while (!q.empty()) {
      TreeNode* left = q.front()[0];
      TreeNode* right = q.front()[1];
      q.pop();
      if (!left && !right) continue;
      if (!left or !right) return false;
      if (left->val != right->val) return false;
      q.push({left->right, right->left});
      q.push({left->left, right->right});
    }
    return true;
  }
};