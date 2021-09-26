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
        if(!head) return NULL;
        
        ListNode *headCopy = head;
        ListNode *temp = head->next;
        ListNode *lastUnique = new ListNode();
        lastUnique->next = head;
        ListNode *newHead = lastUnique;
        
        while(temp && temp->next) {
            // if duplicates found
            if(headCopy->val == temp->val) {
                while(temp->next && temp->val == temp->next->val) {
                    temp = temp->next;
                }
                lastUnique->next = temp->next;
                headCopy = temp->next;
                if(temp->next)
                    temp = temp->next->next;
                continue;
            }
            // if distinct found
            lastUnique = headCopy;
            headCopy = headCopy->next;
            temp = temp->next;
        }
        
        if(temp && headCopy && temp->next == NULL && headCopy->val == temp->val) {
            lastUnique->next = temp->next;
        }
        
        return newHead->next;
    }
};