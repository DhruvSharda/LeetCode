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
    bool isPalindrome(ListNode* head) {
        int count=0;
        if(head == NULL || head->next == NULL)
        return true;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        ListNode* LastPos=head;
        ListNode* NextPos=(head->next!=NULL)?head->next:NULL;
        head=NextPos;
        int i=0;
        LastPos->next=NULL;
        while(i<(count/2 )-1&& head!=NULL){
            i++;
            NextPos=(head->next!=NULL)?head->next:NULL;
            head->next=LastPos;
            LastPos=head;
            head=NextPos;
        }
        if(count%2!=0 &&NextPos!=NULL){
            NextPos=NextPos->next;
        }
        while(LastPos!=NULL && NextPos!=NULL){
            if(LastPos!=NULL && NextPos!=NULL && LastPos->val==NextPos->val ){
                LastPos=LastPos->next;
                NextPos=NextPos->next;
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};