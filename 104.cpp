class Solution {
public:
    int maxDepth(TreeNode* root) {
        int l_ht = 0, r_ht = 0;
        if(!root)
            return 0;
        l_ht = maxDepth(root->left);
        r_ht = maxDepth(root->right);
        if(l_ht > r_ht)
            return l_ht+1;
        return r_ht + 1;
    }
};
