class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode * current1 = l1;
        ListNode * current2 = l2;
        ListNode * head = new ListNode(0);
        ListNode * dummy = head;
        if(!l2)
           return l1;
        else if(!l1)
            return l2;
        else {
            while(current1 != NULL && current2 != NULL) {
                if(current1->val < current2->val) {
                    dummy->next = new ListNode(current1->val);
                    current1 = current1->next;
                }
                else {
                    dummy->next = new ListNode(current2->val);
                    current2 = current2->next;
                }
                dummy = dummy->next;
            }
        }
        if(current1 == NULL) {
            while(current2 != NULL) {
                dummy->next = new ListNode(current2->val);
                current2 = current2->next;
                dummy = dummy->next;
            }
        }
        else if(current2 == NULL) {
            while(current1 != NULL) {
                dummy->next = new ListNode(current1->val);
                current1 = current1->next;
                dummy = dummy->next;
            }
        }
        return head->next;
    }
};
