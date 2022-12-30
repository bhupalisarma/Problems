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
static const auto magic = []() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::cout.tie(nullptr);
  return nullptr;
}();

class BSTIterator {
    stack<TreeNode*> st;
    TreeNode* visit;
public:
    BSTIterator(TreeNode* root) {
        visit = root;
    }
    int next() {
        while(visit){
            st.push(visit);
            visit = visit->left;
        }
        TreeNode* next = st.top(); st.pop();
        visit = next->right;
        return next->val;
    }
    bool hasNext() {
        return visit || !st.empty();
    }
    void pushLeft(TreeNode* root){
        while(root){
            st.push(root);
            root=root->left;
        }
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */