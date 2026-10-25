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
        int c = 1;
        ListNode* temp = head;
        ListNode* tempn;
        ListNode* newl = new ListNode(0);
        ListNode* curr = newl;

        while(temp != NULL) {
            tempn = temp->next;

            while(tempn != NULL) {
                if(tempn->val == temp->val) {
                    c++;
                    temp->next=temp->next->next;
                }
                tempn = tempn->next;
            }
            if(c == 1) {
                curr->next = new ListNode(temp->val);
                curr = curr->next;
            }

            temp = temp->next;
            c = 1;
        }

        return newl->next;
    }
};