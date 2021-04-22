class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head)
            return head;
        vector <int> odd_index_nums;
        vector <int> even_index_nums;
        ListNode * current = head;
        int count = 1;
        while(current != NULL) {
            if(count % 2 == 1)
                odd_index_nums.push_back(current->val);
            else
                even_index_nums.push_back(current->val);
            ++count;
            current = current->next;
        }
        current = head;
        int index = 0;
        while(index < odd_index_nums.size()) {
            current->val = odd_index_nums[index];
            ++index;
            current = current->next;
        }
        index = 0;
        while(index < even_index_nums.size()) {
            current->val = even_index_nums[index];
            ++index;
            current = current->next;
        }
        return head;
    }
};
