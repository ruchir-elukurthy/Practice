class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next == NULL || left == right)
            return head;
        int node_index = 1;
        ListNode * left_start = NULL;
        ListNode * right_end = NULL;
        ListNode * current = head;
        ListNode * prev = head;
        while(node_index != left) {
            prev = current;
            current = current->next;
            ++node_index;
        }
        left_start = current;
        while(node_index != right) {
            ++node_index;
            current = current->next;
        }
        right_end = current->next;
        if(left == 1) {
            if(right_end == NULL)
                cout<<"it is null";
            head = reverseList(left_start, right_end);
        }
        else
            prev->next = reverseList(left_start, right_end);
        return head;
    }
    

    ListNode* reverseList(ListNode * left, ListNode * right) {
		ListNode* curr = left;
		ListNode* prev = right;
		ListNode* nextNode = NULL;

		while(curr != right){
			nextNode = curr->next;
			curr->next = prev;
			prev = curr;
			curr = nextNode;
		}
		return prev;
	}
};
