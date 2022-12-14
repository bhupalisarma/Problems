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
//with map
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int ps,int pe,int is,int ie,unordered_map<int,int>& map){
	// 4) base conditon  
        if(ps>pe||is>ie)return NULL;
	// 5) create root node
        TreeNode* root = new TreeNode(preorder[ps]);
	// 6) find postion of root in inorder vec. using map 
        int inroot = map[root->val];
	// 7) find the left side len. eg:  [9,3,15,20,7];  root=3, left len = rootidx(1) - is(0)
        int left = inroot-is;
	// 8) call on left side and attach to root->left 
        root->left = solve(preorder,inorder,ps+1,ps+left,is,inroot-1,map);
	// 9) call on right side and attach to root->right	
        root->right = solve(preorder,inorder,ps+left+1,pe,inroot+1,ie,map);
	// 10) return root
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
	// 1) maintain a map
        unordered_map<int,int> map;
        int m = preorder.size();
        int n = inorder.size();
   // 2) mapping in inorder to corresponding index
        for(int i=0;i<n;i++)map[inorder[i]] = i;
	// 3) call solve function 	
         return solve(preorder,inorder,0,m-1,0,n-1,map);
    }
};