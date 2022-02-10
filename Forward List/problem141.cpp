/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        std::set<ListNode*> s;
        ListNode * tmp = head;
        while(tmp)
        {
            if(!s.insert(tmp).second)
            {
                return true;
            }
            tmp = tmp->next;
        }
        return false;
    }
};