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



//BFS solution.
class Solution {
public:
    int minDepth(TreeNode* root) {
        queue<TreeNode *> nums;
        if(!root)
            return 0;
        int min_depth = 0;
        nums.push(root);
        while(!nums.empty()) {
            ++min_depth;
            int size = nums.size();
            while(size > 0) {
                TreeNode * temp = nums.front();
                --size;
                nums.pop();
                if(!temp->left && !temp->right)
                    return min_depth;
                if(temp->left)
                    nums.push(temp->left);
                if(temp->right)
                    nums.push(temp->right);
            }
        }
        return min_depth;
    }
};
