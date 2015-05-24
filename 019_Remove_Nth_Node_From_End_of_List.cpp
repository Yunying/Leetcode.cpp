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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head == NULL) return NULL;
        if (head->next == NULL) return NULL;
        ListNode* tail = head;
        ListNode* head2 = head;
        for (int i=0; i<n; i++) tail = tail->next;
        if (tail == NULL) return head->next;
        while (tail != NULL && tail->next != NULL){
            head2 = head2->next;
            tail = tail->next;
        }
        if (head2 == tail) return head->next;
        
        head2->next = head2->next->next;
        return head;
        
    }
};