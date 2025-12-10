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
  bool isSameTree(TreeNode* p, TreeNode* q) {
    stack<vector<TreeNode*>> s;
    s.push({p, q});
    while (!s.empty()) {
      TreeNode* t1 = s.top()[0];
      TreeNode* t2 = s.top()[1];
      s.pop();
      if (!t1 && !t2)
        continue;
      else if (!t1 || !t2)
        return false;
      if (t1->val != t2->val) return false;
      s.push({t1->left, t2->left});
      s.push({t1->right, t2->right});
    }
    return true;
  }
};