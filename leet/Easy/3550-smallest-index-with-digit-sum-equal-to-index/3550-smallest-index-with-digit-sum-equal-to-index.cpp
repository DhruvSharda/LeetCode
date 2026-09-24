class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            while(nums[i]!=0){
                sum+=nums[i]%10;
                nums[i]/=10;
            }
            if(sum==i && sum<ans){
                ans=sum;
            }
        }
        if(ans>nums.size()){
            return -1;
        }
        return ans;
    }
};