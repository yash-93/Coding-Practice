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
        ListNode* copyHead = head;
        ListNode* temp = head->next;
        while(temp != NULL) {
            if(copyHead->val == temp->val) {
                ListNode* toBeDeleted = temp;
                temp = temp->next;
                delete toBeDeleted;
                if(!temp) copyHead->next = temp;
                continue;
            }
            copyHead->next = temp;
            copyHead = temp;
            temp = temp->next;
        }
        return head;
    }
};