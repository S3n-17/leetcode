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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int c = 0, i, j;
        ListNode* temp = head;

        while (temp != NULL) {
            c++;
            temp = temp->next;
        }

        int n = c / k;
        temp = head;

        ListNode* newNode = new ListNode();
        ListNode* tempn = newNode;

        for (i = 0; i < n; i++) {
            vector<int> digits;

            for (j = 0; j < k; j++) {
                digits.push_back(temp->val);
                temp = temp->next;
            }

            for (j = k - 1; j >= 0; j--) {
                tempn->val = digits[j];

                if (i != n - 1 || j != 0 || c % k != 0) {
                    tempn->next = new ListNode();
                    tempn = tempn->next;
                }
            }
        }

        while (temp != NULL) {
            tempn->val = temp->val;
            temp = temp->next;

            if (temp != NULL) {
                tempn->next = new ListNode();
                tempn = tempn->next;
            }
        }

        return newNode;
    }
};