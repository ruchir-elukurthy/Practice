class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * slow = head;
        ListNode * fast = head;
        ListNode * current = head;
        while(fast->next->next && slow->next) {
            slow = current->next;
            fast = current->next->next;
            if(slow == fast)
                return true;
        }
        return false;
    }
};
