class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min=INT_MAX;
        int max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
            }
            if(nums[i]<min){
                min=nums[i];
            }
        }
        while(min!=0){
            int temp=min;
            min=max%min;
            max=temp;
        }
        return max;
    }
};