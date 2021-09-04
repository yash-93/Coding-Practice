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
    ListNode* reverse(ListNode *head, ListNode *revHead) {
        if(head == NULL) return revHead;
        ListNode *temp = head->next;
        head->next = revHead;
        revHead = head;
        head = temp;
        return reverse(head,revHead);
    }
    
    ListNode* reverseList(ListNode* head) {
        ListNode *revHead = NULL;
        // while(head != NULL) {
        //     ListNode *temp = head->next;
        //     head->next = reverse;
        //     reverse = head;
        //     head = temp;
        // }
        // return reverse;
        return reverse(head,revHead);
    }
};