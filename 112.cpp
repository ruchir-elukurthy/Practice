class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)
            return false;
        int sum = 0;
        bool check = checkPathSum(root, targetSum, sum);
        if(check == 1)
            return true;
        return false;        
    }
    
    bool checkPathSum(TreeNode * root, int targetSum, int sum) {
        if(!root)
            return false;
        if(!root->left && !root->right) {
            sum+= root->val;
            if(targetSum == sum) {
                return 1;
            }
            return 0;
        }
        return checkPathSum(root->left, targetSum, sum + root->val) || checkPathSum(root->right, targetSum, sum + root->val);
    }
};
