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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int> store;
        while(temp != NULL){
            store.push_back(temp->val);
            temp=temp->next;
        }
        if(size(store)!=0){
            sort(store.begin(),store.end());
            ListNode* newL = new ListNode(store[0]);
            ListNode* tempn = newL;
            for(int i=1; i<size(store);i++){
                tempn->next=new ListNode(store[i]);
                tempn=tempn->next;
            }
            return newL;
        }
        else{
            return NULL;
        }
        
        
    }
};