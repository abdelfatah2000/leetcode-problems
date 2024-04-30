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
    ListNode* partition(ListNode* head, int x) {

        ListNode* less = new ListNode(0);
        ListNode* greater = new ListNode(0);
        ListNode* lessPtr = less;
        ListNode* greaterPtr = greater;

        while (head != NULL) {

            if (head->val < x) {

                lessPtr->next = head;
                lessPtr = lessPtr->next;

            } else {

                greaterPtr->next = head;
                greaterPtr = greaterPtr->next;
            }
            head = head->next;
        }
        lessPtr->next = greater->next;
        greaterPtr->next = NULL;

        return less->next;
    }
};