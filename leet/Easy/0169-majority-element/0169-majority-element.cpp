class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int el=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                count++;
                el=nums[i];
            }
            else if(el==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==el){
                count++;
            }
        }
        if(count>(n/2)){
            return el;
        }
        return -1;
    }
};