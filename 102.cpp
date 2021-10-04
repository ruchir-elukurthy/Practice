class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL)
            return result;
        queue<TreeNode *> queue_nodes;
        int size = 0;
        queue_nodes.push(root);
        while(queue_nodes.empty() == false) {
            vector<int> nodes_in_level;
            size = queue_nodes.size();
            while(size--) {
                TreeNode * current = queue_nodes.front();
                queue_nodes.pop();
                if(current->left) queue_nodes.push(current->left);
                if(current->right) queue_nodes.push(current->right);
                nodes_in_level.push_back(current->val);
            }
            
            result.push_back(nodes_in_level);
        }
        return result;
    }
};
