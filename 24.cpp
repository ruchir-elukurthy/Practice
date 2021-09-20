class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode * dummy = new ListNode(-1);
        ListNode * current = head;
        ListNode * dummy_head = dummy;
        while(current != NULL && current->next != NULL) {
            dummy_head->next = reverse(current, current->next->next);
            dummy_head = dummy_head->next->next;
            current = current->next;
        }
        return dummy->next;  
    }
    
    ListNode * reverse(ListNode * left, ListNode * right) {
        ListNode * current = left;
        ListNode * prev = right;
        ListNode * nextNode = NULL;
        
        while(current != right) {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        
        return prev;
    }
};
