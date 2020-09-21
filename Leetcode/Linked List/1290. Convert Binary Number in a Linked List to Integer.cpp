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
    int getDecimalValue(ListNode* head) {
        vector<int> digits;
        while(head->next != NULL){
            digits.push_back(head->val);
            head = head->next;
        }
        
        digits.push_back(head->val);
        
        int n = digits.size();
        //cout << n << endl;
        int sum = 0;
        
        for(auto i:digits){
            --n;
            if(i)
                sum += pow(2,n);
        }
        return sum;
    }
};