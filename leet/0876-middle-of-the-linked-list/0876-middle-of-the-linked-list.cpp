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
    ListNode* middleNode(ListNode* head) {
        int i=1;
        ListNode* temp1=head;
        while(temp1!=nullptr){
            i++;
            temp1=temp1->next;
        }
        int j=1;
        ListNode* temp2=head;
        if(i%2==0){
            while(j!=i/2){
                temp2=temp2->next;
                j++;
            }
        }
        else{
            while(j!=(i/2)+1){
                temp2=temp2->next;
                j++;
            }
        }
        
        return temp2;
    }
};