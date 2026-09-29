class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max1=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                max1++;
            }
            else{
                if(ans<max1){
                    ans=max1;
                }
                max1=0;
            }
        }
        if(ans<max1){
                    ans=max1;
                    max1=0;
                }
        return ans;
    }
};