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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head != NULL){
            ListNode* temp = head, * q = head->next;
            while(q != NULL){
                if(temp->val != q->val){
                    temp = q;
                    q = q->next;
                } else {
                    temp->next = q->next;
                    delete(q);
                    q = temp->next;
                }
            }
        }
            
        return head;
    }
};