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
    int numComponents(ListNode* head, vector<int>& nums) {
        int n=0;
        int m=0;
        int o=0;
        vector<int> pos;
        ListNode* temp1=head;
        for(int i=0;i<nums.size();i++){
            while(temp1!=nullptr){
            if(nums[i]==temp1->val){
                pos.push_back(m);
                temp1=head;
                break;
            }
            m++;
            temp1=temp1->next;
        }
        temp1=head;
        m=0;
        }
        sort(pos.begin(),pos.end());
        for(int i=0;i<pos.size()-1;i++){
            if(pos[i]+1==pos[i+1]){
                o++;
            }
        }
        return pos.size()-o;        
    }
};