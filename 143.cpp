class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head->next || !head->next->next)
            return;
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode * hold = slow->next;
        slow->next = NULL;
        hold = reverse(hold);
        reorder(head, hold);
    }
    
    ListNode * reverse(ListNode * head) {
        ListNode * prev = NULL;
        ListNode * current = head;
        ListNode * nextNode = NULL;
        while(current != NULL) {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        return prev;
    }
    
    void reorder(ListNode * head, ListNode * hold) {
        ListNode * current = head;
        while(hold != NULL) {
            ListNode * temp = current->next;
            current->next = hold;
            hold = hold->next;
            current->next->next = temp;
            current = current->next->next;
        }
        
    }
};
