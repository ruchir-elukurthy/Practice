class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
            return 0;
        unordered_map<int,int> duplicates;
        ListNode * current = head;
        while(current != NULL) {
            if(duplicates.find(current->val) == duplicates.end())
                duplicates.insert({current->val,1});
            else
                duplicates[current->val]++;
            current = current->next;
        }
        deleteDuplicates(head,duplicates);
        return head;
    }
    void deleteDuplicates(ListNode * & head, unordered_map<int,int> & duplicates) {
        if(!head)
            return;
        if(duplicates[head->val] > 1) {
            ListNode * temp = head->next;
            delete head;
            head = temp;
            return deleteDuplicates(head,duplicates);
        }
        return deleteDuplicates(head->next,duplicates);
    }
};
