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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp1=head;
        if(temp1==nullptr){
            return NULL;
        }
        while(temp1!=nullptr){
            if(temp1->val==val){
                while(temp1!=nullptr && temp1->val==val){
                    if(temp1->next!=nullptr){
                        ListNode* temp2=temp1->next;
                        head=temp2;
                        delete temp1;
                        temp1=head;
                    }
                    else{
                    delete temp1;
                    return NULL;
                }
                }
            
        }
        if(temp1!=nullptr && temp1->next!=nullptr){
            if(temp1->next->val==val){
                while(temp1->next!=nullptr && temp1->next->val==val){
                ListNode* temp2=temp1->next;
                temp1->next=temp1->next->next;
                delete temp2;
                }
                temp1=temp1->next;
            }
            else{
               temp1=temp1->next; 
            } 
        } 
        else{
               temp1=temp1->next; 
            }    
        }
        return head;
    }
};