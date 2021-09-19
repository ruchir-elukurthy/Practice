class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
            return head;
        ListNode * odd_head = new ListNode(-1);
        ListNode * even_head = new ListNode(-2);
        ListNode * even = even_head;
        ListNode * odd = odd_head;
        ListNode * current = head;
        ListNode * hold = head;
        int count = 1;
        while(current != NULL) {
            if(count % 2 == 0) {
                even->next = current;
                even = even->next;
                hold = even->next;
                even->next = NULL;
            }
            else {
                odd->next = current;
                odd = odd->next;
                hold = odd->next;
                odd->next = NULL;
            }
            ++count;
            current = hold;
        }
        odd->next = even_head->next;
        return odd_head->next;
    }
};
