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
class Solution {
public:
    void inorderhelp(TreeNode* root, vector<int>& x){
        
        if(root == NULL){
            return;
        }
        inorderhelp(root->left, x);  //left subtree
        x.push_back(root->val);      //pushing value of root to ans
        inorderhelp(root->right, x); //right subtree
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> x;
        inorderhelp(root, x);
        return x;
    }
};