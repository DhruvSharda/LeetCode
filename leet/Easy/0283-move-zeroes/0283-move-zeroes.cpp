class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp=0;
        int k=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0 && i<n-k && nums[i+k]!=0){
                nums[i]=nums[i+k];
                nums[i+k]=0;
            }
            else if(nums[i]==0 && i<n-k && nums[i+k]==0){
                k++;
                i--;
            }
        }
    }
};