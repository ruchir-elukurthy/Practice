class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head)
            return head;
        else if(!head->next)
            return head;
        vector<int> nums;
        ListNode * current = head;
        while(current != NULL) {
            nums.push_back(current->val);
            current = current->next;
        }
        int len = nums.size()-1;
        current = head;
        int index = len;
        while(index >= 0) {
            current->val = nums[index];
            current = current->next;
            --index;
        }
        return head;
    }
};
