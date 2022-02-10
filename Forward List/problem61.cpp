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
    ListNode* rotateRight(ListNode* head, int k) {
        int n = 0;
        ListNode* curr = head;
        while(curr != nullptr) 
        {
            ++n;
            curr = curr->next;
        }
        
        if(n <= 1) return head;
        int i = k % n;
        while(i)
        {
            ListNode* temp = head;
            while(temp->next->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next->next = head;
            head = temp->next;
            temp->next = nullptr;
            --i;    
        }
        return head;
    }
};