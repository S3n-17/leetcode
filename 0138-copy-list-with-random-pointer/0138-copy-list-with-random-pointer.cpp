/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head == NULL){
            return NULL;
        }
            
        Node* cn = new Node(0);
        Node* temp = head;
        Node* tempcn = cn;
        while(temp!=NULL){
            tempcn->val = temp->val;
            if(temp->next!=NULL){
               tempcn->next = new Node(0); 
            }
            
            // if(temp->random!=NULL){
            //     tempcn->random = new Node(temp->random->val);
            // }
            tempcn = tempcn->next;
            temp = temp->next;
        } 
        temp=head;
        tempcn=cn;
        Node* ran=cn;
        int c=0, cc=0;
        while(temp != NULL){
    if(temp->random != NULL){
        Node* search = head;
        cc = 0;

        while(search != temp->random){
            search = search->next;
            cc++;
        }

        tempcn = cn;
        for(int i = 0; i < cc; i++){
            tempcn = tempcn->next;
        }

        ran->random = tempcn;
        }
        else{
            ran->random = NULL;
        }

        c++;
        ran = ran->next;
        tempcn = cn;
        temp = temp->next;
    }
        return cn;
    }
};