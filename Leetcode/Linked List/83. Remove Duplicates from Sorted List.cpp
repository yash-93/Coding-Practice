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
        ListNode* headCopy = head;
        ListNode* temp = NULL;
        
        while(headCopy && headCopy->next) {
            if(headCopy->val == headCopy->next->val) {
                temp = headCopy->next;
                headCopy->next = headCopy->next->next;
                delete temp;
            } else {
                headCopy = headCopy->next;
            }
        }
        
        return head;
    }
};