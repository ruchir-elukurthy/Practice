// 3 -> 0, 2-> 1, 0 -> 3, -4 -> 4,
// 2
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int> my_map;
        ListNode * current = head;
        int i = 0;
        while(current != NULL) {
            if (my_map.find (current) == my_map.end())
                my_map.insert({current, i});
            else 
                return current;
            ++i;
            current = current->next;
        }
        return NULL;
    }
};
