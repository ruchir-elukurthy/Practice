class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int numberOfNodes = 0;
        ListNode * current = head;
        while(current != NULL) {
            ++numberOfNodes;
            current = current->next;
        }
        if(numberOfNodes == 0 || k == 0)
            return head;
        int numberOfRotations = numberOfNodes - (k % numberOfNodes);
        if(numberOfRotations == 0 || numberOfRotations == numberOfNodes)
            return head;
        int count = 0;
        ListNode * temp = recursiveRotate(head,numberOfRotations,count);
        current = temp;
        while(current->next != NULL) {
            current = current->next;
        }
        current->next = head;
        head = temp;
        return head;
    }
    
    ListNode * recursiveRotate(ListNode * & head, int numberOfRotations, int count) {
        if(!head)
            return head;
        if(count == numberOfRotations) {
            ListNode * temp = head;
            head = NULL;
            return temp;
        }
        return recursiveRotate(head->next,numberOfRotations,count+1);
        
    }
};
