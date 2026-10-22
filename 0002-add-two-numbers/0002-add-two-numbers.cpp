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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int s,c1=0,c2=0,num1=0,num2=0;
        ListNode* temp1=l1;
        ListNode* temp2=l2;
        ListNode* sum= new ListNode();
        ListNode* tempsum=sum;
        int car=0;
        while(temp1!=NULL || temp2!=NULL || car != 0){
            num1 = 0;
            num2 = 0;

            if(temp1 != NULL) {
                num1 = temp1->val;
                temp1 = temp1->next;
            }

            if(temp2 != NULL) {
                num2 = temp2->val;
                temp2 = temp2->next;
            }

            s = num1 + num2 + car;
            if(s>=10){
                tempsum->next=new ListNode(s%10);
                car=s/10;
                printf("\n%d",car);
                printf("\n1");
            }
            else{
                tempsum->next=new ListNode(s);
                car=0;
                printf("\n%d",car);
                printf("\n2");
            }
            tempsum=tempsum->next;
        }
        sum=sum->next;
        tempsum=sum;
        while(tempsum!=NULL){
            printf("%d",tempsum->val);
            tempsum=tempsum->next;
        }
        return sum;
    }
    long int rev(int n){
        long long int r=0;
        while(n!=0){
            r=10*r+n%10;
            n=n/10;
        }
        return r;
    }
};