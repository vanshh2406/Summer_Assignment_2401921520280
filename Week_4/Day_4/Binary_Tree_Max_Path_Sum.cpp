class Solution {
public:
    int ans = INT_MIN;
    int helper(TreeNode* root) {
        if (root == NULL){
            return 0;
        }
        int l = max(0,helper(root->left));
        int r = max(0,helper(root->right));
        ans = max(ans,l+r+root->val);
        return root->val + max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        helper(root);
        return ans;
    }
};
