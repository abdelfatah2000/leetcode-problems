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
        if(!head || !head->next) return head;
        int size = 0;

        ListNode* iter = head;
        ListNode* temp = nullptr;
        while(iter){
            size++;
            iter = iter->next;
        }
        iter = head;
        k = k%size;
        while(k)
            {
            while(iter->next)
                {
                    temp = iter;
                    iter = iter->next;
                }

            temp->next = nullptr;
            iter->next = head;
            head = iter;
            k--;
            }
        return head;
        
    }
};