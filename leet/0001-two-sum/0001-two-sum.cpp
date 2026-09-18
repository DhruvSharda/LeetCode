class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=1;
        int sum=0;
            for(int j=0;j<nums.size();){
                sum=nums[j]+nums[j+n];
                if(target==sum){
                return {j,j+n};
            }
            else if(n!=(nums.size()-(j+1))){
                n++;
            }
            else if(j!=nums.size()-1){
                j++;
                n=1;
            }
            else{
                j++;
                n=0;
            }
        }
        return {};
    }
};