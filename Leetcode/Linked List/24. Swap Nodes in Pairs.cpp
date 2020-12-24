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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;

        ListNode* newHead, *f;
        f = head;
        newHead = f->next;
        while(1){
            ListNode* s = f->next;
            ListNode* temp = s->next;
            s->next = f;
            if(temp == NULL || temp->next == NULL){
                f->next = temp;
                break;
            }
            f->next = temp->next;
            f = temp;
        }
        return newHead;
    }
};