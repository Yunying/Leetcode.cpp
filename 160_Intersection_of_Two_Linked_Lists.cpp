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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB){
            return NULL;
        }
        ListNode* tmp1 = headA;
        int size1 = 0; int size2 = 0;
        while(tmp1){
            size1++; tmp1 = tmp1->next;
        }
        ListNode* tmp2 = headB;
        while(tmp2){
            size2++; tmp2 = tmp2->next;
        }
        tmp1 = headA; tmp2 = headB;
        int dif = 0;
        if (size1>size2){
            dif = size1-size2;
            for (int i=0; i<dif; i++){
                tmp1 = tmp1->next;
            }
        }
        else if (size1 < size2){
            dif = size2-size1;
             for (int i=0; i<dif; i++){
                tmp2 = tmp2->next;
            }
        }
        while(tmp1 && tmp2){
            if (tmp1 == tmp2) return tmp1;
            tmp1 = tmp1->next; tmp2 = tmp2->next;
        }
        return NULL;
        
    }
};