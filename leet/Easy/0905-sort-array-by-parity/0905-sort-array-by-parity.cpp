class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int temp=0;
        int n=nums.size();
        int k=1;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0 && i+k<nums.size()){
                temp=nums[i+k];
                nums[i+k]=nums[i];
                nums[i]=temp;
            }
            if(nums[i]%2!=0 && i+k<nums.size()){
                i--;
                k++;
            }
        }
        return nums;
    }
};