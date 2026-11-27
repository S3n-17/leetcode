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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head;
        vector<int> v;
        int p=1;
        while(temp!=NULL){
            if(p>=left && p<=right){
                v.push_back(temp->val);
            }
            if(p==right){
                break;
            }
            p++;
            temp=temp->next;
        }
        reverse(v.begin(),v.end());
        p=1;
        int i=0;
        temp=head;
        while(temp!=NULL){
            if(p==left){
                while(p<=right){
                    temp->val=v[i];
                    i++;
                    temp=temp->next;
                    p++;
                }
                break;
            }
            p++;
            temp=temp->next;
        }
        return head;
    }
};