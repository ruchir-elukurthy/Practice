class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        ListNode * prev = head;
        ListNode * slow = head;
        ListNode * fast = head;
        
        while(fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = NULL;
        ListNode * left_head = sortList(head);
        ListNode * right_head = sortList(slow);
        return mergeSort(left_head, right_head);
    }
    
    ListNode * mergeSort(ListNode * left, ListNode * right) {
        ListNode * dummy = new ListNode(-1);
        ListNode * current = dummy;
        while(left != NULL && right != NULL) {
            if(left->val < right->val) {
                current->next = left;
                left = left->next;
            }
            else {
                current->next = right;
                right = right->next;
            }
            current = current->next;
        }
        
        while(left != NULL) {
            current->next = left;
            current = current->next;
            left = left->next;
        }    
        while(right != NULL) {
            current->next = right;
            current = current->next;
            right = right->next;
        }
        return dummy->next;
    }
};
