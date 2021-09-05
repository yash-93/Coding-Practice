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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* mergedHead = new ListNode();
        ListNode* mergedHeadCopy = mergedHead;
        
        while(l1 != NULL && l2 != NULL) {
            if(l1->val < l2->val) {
                mergedHeadCopy->next = l1;
                l1 = l1->next;
            } else {
                mergedHeadCopy->next = l2;
                l2 = l2->next;
            }
            mergedHeadCopy = mergedHeadCopy->next;
        }
        
        while(l1) {
            mergedHeadCopy->next = l1;
            l1 = l1->next;
            mergedHeadCopy = mergedHeadCopy->next;
        }
        
        while(l2) {
            mergedHeadCopy->next = l2;
            l2 = l2->next;
            mergedHeadCopy = mergedHeadCopy->next;
        }
        
        return mergedHead->next;
    }
};