class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (!head){
            return head;
        }
        else{
            while (head->val == val){
                head = head->next;
                if (head == NULL){
                    return head;
                }
            }
            ListNode* track = head->next;
            ListNode* prev = head;
            while (track != NULL){
                if (track->val == val){
                    prev->next = track->next;
                    track = track->next;
                }
                else{
                    prev = track;
                    track = track->next;
                }
            }
            return head;
        }
    }
};