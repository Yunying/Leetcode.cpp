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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        ListNode* tmp1 = l1; ListNode* tmp2 = l2;
        ListNode* t; ListNode* head;
        if (l1->val <= l2-> val){
            head = l1;
            tmp1 = tmp1->next;
        } 
        else{
            head = l2;
            tmp2 = tmp2->next;
        } t = head;
        while (tmp1 != NULL && tmp2 != NULL){
            if (tmp1->val <= tmp2->val){
                t->next = tmp1;
                tmp1 = tmp1->next;
            }
            else{
                t->next = tmp2;
                tmp2 = tmp2->next;
            }
            t = t->next;
        }
        while (tmp1){
            t->next = tmp1;
            tmp1 = tmp1->next;
            t = t->next;
        }
        while (tmp2){
            t->next = tmp2;
            tmp2 = tmp2->next;
            t = t->next;
        }
        return head;
    }
};