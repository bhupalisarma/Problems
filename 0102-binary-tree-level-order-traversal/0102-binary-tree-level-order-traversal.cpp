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
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         vector<vector<int>> ans;
        
//         if(root == NULL) return ans;
//         queue <TreeNode*> q;
//         q.push(root);
//         while (!q.empty()){
//             vector<int> level;
//             for(int i=0;i<q.size();i++){
//                 TreeNode *node = q.front();
//                 q.pop();
                
//                 if(node->left != NULL) q.push(node->left);
//                 if(node->right != NULL) q.push(node->right);
//                 level.push_back(node->val);
//             }
//             ans.push_back(level);
//         }
//         return ans;
//     }
// };


class Solution {
public:
    
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> add;
        if(!root)
            return ans;
        
        queue<TreeNode*> mq;
        mq.push(root);

        while(mq.size() > 0){
            int count = mq.size();
            for(int i = 0; i < count; i++){
                root = mq.front();
                mq.pop();
                add.push_back(root->val);

                if(root->left != NULL)
                    mq.push(root->left);

                if(root->right != NULL)
                    mq.push(root->right);
                }
                ans.push_back(add);
                add.clear();
            }
    
        return ans;
    }
};