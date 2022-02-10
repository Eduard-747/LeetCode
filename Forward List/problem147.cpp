/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dm = new ListNode;
        ListNode * curr = dm;
        while(head){
            ListNode * tmp = head->next;
            curr = dm;
            while(curr->next && curr->next->val <= head->val){
                curr = curr->next;
            }
            head->next = curr->next;
            curr->next = head;
            head = tmp;
        }
        return dm->next;
    }
};