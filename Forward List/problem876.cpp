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
    ListNode* middleNode(ListNode* head) {
        int size{};
        ListNode * tmp(head);
        while(tmp->next) {
            size++;
            tmp = tmp->next;
        }
        if(size % 2 == 0) {
            for(int i = 0;i < size/2 ;++i) {
                head = head->next;
            }
        } else {
            for(int i = 0;i <= size/2;++i) {
                head = head->next;
            }
        }
        return head;
    }
};