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
// class Solution {
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//         vector<int> sol;
//         postorder(root, sol);
//         return sol;
//     }
// private:
//     void postorder(TreeNode* root, vector<int>& sol) {
//         if (!root)
//             return;
//         postorder(root->left, sol);
//         postorder(root->right, sol);
//         sol.push_back(root->val);
//     }
// };

class Solution {
public:
    vector<int> postorderTraversal(TreeNode* curr) {
    vector < int > postOrder;
    if (curr == NULL) return postOrder;

  stack < TreeNode * > s1;
  stack < TreeNode * > s2;
  s1.push(curr);
  while (!s1.empty()) {
    curr = s1.top();
    s1.pop();
    s2.push(curr);
    if (curr -> left != NULL)
      s1.push(curr -> left);
    if (curr -> right != NULL)
      s1.push(curr -> right);
  }
  while (!s2.empty()) {
    postOrder.push_back(s2.top() -> val);
    s2.pop();
  }
  return postOrder;
    }
};

