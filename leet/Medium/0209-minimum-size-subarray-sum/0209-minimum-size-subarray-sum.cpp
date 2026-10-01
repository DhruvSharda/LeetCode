class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {//sliding window
        int left=0,sum=0,count=0,min=0;
        bool flag=true;
        for(int num : nums){
            sum+=num;
            count++;
            if(sum>=target){
                if(flag){
                    min=count;
                    flag=false;
                }
            }
            while(sum>target){
                sum-=nums[left];
                left++;
                count--;
            }
            if(min>count){
                    min=count;
                    if(sum<target){
                min++;
            }
                }
            }
            return min;
    }
};