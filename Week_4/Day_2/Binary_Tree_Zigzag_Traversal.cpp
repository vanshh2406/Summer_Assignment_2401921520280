class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool LR = true;
        while (q.size()>0) {
            int n = q.size();
            vector<int> v(n);
            for (int i=0;i<n;i++) {
                TreeNode* node = q.front();
                q.pop();
                int index = LR ? i : n-1-i;
                v[index] = node->val;
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            ans.push_back(v);
            LR = !LR;
        }
        return ans;
    }
};
