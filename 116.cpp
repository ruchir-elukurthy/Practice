class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
            return root;
        queue<Node *> queue_nodes;
        queue_nodes.push(root);
        int size = 0;
        while(queue_nodes.empty() == false) {
            size = queue_nodes.size();
            Node * dummy = new Node(-1);
            while(size--) {
                dummy->next = queue_nodes.front();
                queue_nodes.pop();
                Node * current = dummy->next;
                if(current->left) queue_nodes.push(current->left);
                if(current->right) queue_nodes.push(current->right);
                dummy = dummy->next;
            }
            dummy->next = NULL;
            dummy = NULL;
        }
        return root;
    }
};
