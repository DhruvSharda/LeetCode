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
    mt19937 gen;
    ListNode* head;
    int n=0;
    Solution(ListNode* head) {
        this->head=head;
        ListNode* temp1=head;
        while(temp1!=nullptr){
            n++;
            temp1=temp1->next;
        }
    }
    
    int getRandom() {
        ListNode* temp1=head;
        uniform_int_distribution<int> dist(0,n-1);
        temp1=head;
        int z=dist(gen);
        for(int i=0;i<z;i++){
            temp1=temp1->next;
        }
        return temp1->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */