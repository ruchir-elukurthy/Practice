class Solution {
public:
    void recoverTree(TreeNode* root) {
        if(!root)
            return;
        TreeNode * prev = new TreeNode(INT_MIN);
        TreeNode * min = new TreeNode(INT_MAX);
        bool found = false;
        find_change_inorder(root, prev , min, found);
        swap(prev->val, min->val);
        return;
    }
    void find_change_inorder(TreeNode * & root, TreeNode * & prev, TreeNode * & min, bool & found) {
        if(!root)
            return;
        find_change_inorder(root->left, prev, min, found);
        if(prev->val > root->val) {
            found = true;
            if(min->val > root->val)
                min = root;
        }
        else if(found == false)
            prev = root;
        find_change_inorder(root->right, prev, min, found);
        
    }
};
