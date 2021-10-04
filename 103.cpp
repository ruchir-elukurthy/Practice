class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL)
            return result;
        queue<TreeNode *> queue_nodes;
        int level = 0;
        queue_nodes.push(root);
        int size = 1;
        while(queue_nodes.empty() == false) {
            vector<int> nums_in_level;
            size = queue_nodes.size();
            while(size--) {
                TreeNode * current = queue_nodes.front();
                queue_nodes.pop();
                if(current->left) queue_nodes.push(current->left);
                if(current->right) queue_nodes.push(current->right);
                nums_in_level.push_back(current->val);
            }
            if(level == 1) {
                reverse(nums_in_level.begin(), nums_in_level.end());
                level = 0;
            }
            else 
                level = 1;
            result.push_back(nums_in_level);
        }
        return result;
    }
};
