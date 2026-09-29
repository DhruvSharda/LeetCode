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
        if(left==right){
            return head;
        }
        else if((left+right)%2==0){
        while(left!=right){
            ListNode* temp1=head;
            ListNode* temp2=head;
            ListNode* temp3=new ListNode();
        for(int i=0;i<right-1;i++){
            if(i==left-1){
                temp1=temp2;
            }
            temp2=temp2->next;
        }
        temp3->val=temp1->val;
        temp1->val=temp2->val;
        temp2->val=temp3->val;
        delete temp3;
        left++;
        right--;
        }
        }     
        else{
            while(left-1!=right){
            ListNode* temp1=head;
            ListNode* temp2=head;
            ListNode* temp3=new ListNode();
        for(int i=0;i<right-1;i++){
            if(i==left-1){
                temp1=temp2;
            }
            temp2=temp2->next;
        }
        temp3->val=temp1->val;
        temp1->val=temp2->val;
        temp2->val=temp3->val;
        delete temp3;
        left++;
        right--;
        }}
        return head;
    }
};