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
    ListNode* reverseList(ListNode* head) {
        ListNode* LastPos=head;
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode* NextPos=head->next;
        head->next=NULL;
        head=NextPos;
        while(head!=NULL){
            NextPos=head->next;
            head->next=LastPos;
            LastPos=head;
            head=NextPos;
        }
        return LastPos;
    }
};