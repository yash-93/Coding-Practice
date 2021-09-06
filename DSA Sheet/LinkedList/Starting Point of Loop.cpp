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
    ListNode *detectCycle(ListNode *head) {
        if(!head) return NULL;
        
        ListNode* f = head;
        ListNode* s = head;
        ListNode* curr = head;
        
        while(f && f->next) {
            s = s->next;
            f = f->next->next;
            if(s == f) {
                while(s != curr) {
                    s = s->next;
                    curr = curr->next;
                }
                return curr;
            }
        }
        
        return NULL;
    }
};