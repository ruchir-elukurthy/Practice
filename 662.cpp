class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)
            return 0;
        set_depth_position(root, 0, 1);
        return max_width;
    }
    void set_depth_position(TreeNode * root, unsigned int depth, unsigned int position) {
        if(!root)
            return;
        if(depth_position.count(depth) == 0)
            depth_position.insert({depth, position});
        max_width = max_func(max_width, position - depth_position[depth]+1);
        set_depth_position(root->left, depth+1, position*2);
        set_depth_position(root->right,depth+1, position*2+1);
    }
    unsigned int max_func(unsigned int max_width,  unsigned int position) {
        if(max_width > position)
            return max_width;
        return position;
    }
private:
    unsigned int max_width = 0;
    unordered_map<unsigned int, unsigned int> depth_position;
};
