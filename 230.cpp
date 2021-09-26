class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        if(!root)
            return 0;
        vector<int> num;
        smallest(root,k,num);
        return num[k-1];
    }
    
    void smallest(TreeNode * & root, int k, vector<int> & num) {
        if(!root)
            return;
        smallest(root->left,k, num);
        num.push_back(root->val);
        smallest(root->right,k-1, num);
    }
};
