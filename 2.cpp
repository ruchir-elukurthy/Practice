class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == nullptr)
            return l2;
        else if(l2 == nullptr)
            return l1;
        ListNode * curr1 = l1;
        ListNode * curr2 = l2;
        ListNode * head = new ListNode(-1);
        ListNode * dummy = head;
        int carry = 0;
        int temp = 0;
        while(curr1 != NULL && curr2 != NULL) {
            temp = curr1->val + curr2->val + carry;
            dummy->next = new ListNode(temp % 10);
            carry = temp/10;
            curr1 = curr1->next;
            curr2 = curr2->next;
            dummy = dummy->next;
        }
        if(curr1 == NULL) {
            while(curr2 != NULL) {
                temp = curr2->val + carry;
                dummy->next = new ListNode(temp % 10);
                carry = temp/10;
                curr2 = curr2->next;
                dummy = dummy->next;
            }
        }
        else if(curr2 == NULL) {
            while(curr1 != NULL) {
                temp = curr1->val + carry;
                dummy->next = new ListNode(temp % 10);
                carry = temp/10;
                curr1 = curr1->next;
                dummy = dummy->next;
            }
        }
        if(carry != 0) {
            dummy->next = new ListNode(carry);
        }
        return head->next;
    }
};


