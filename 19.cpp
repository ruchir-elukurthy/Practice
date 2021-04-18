class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)
            return head;
        int x = removeElementFromEnd(head, n);
        return head;
    }
    
    int removeElementFromEnd(ListNode * & head, int n) {
        int count = 1;
        if(!head)
            return 0;
        count = removeElementFromEnd(head->next,n);
        ++count;
        if(count == n) {
            ListNode * temp = head->next;
            delete head;
            head = temp;
        }
        return count;
    }
};
