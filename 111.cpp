class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        int left_depth = minDepth(root->left);
        int right_depth = minDepth(root->right);
        if(left_depth == 0)
            return right_depth + 1;
        else if(right_depth == 0)
            return left_depth + 1;
        else
            return 1 + min(left_depth,right_depth);
    }
};
