class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int a=nums.size();
        vector<int> nums2(a,0);
        k=k%a;
        if (k == 0) return;
        int i=a-k;
        bool flag=true;
        int b=0;
        while(i<a){
            nums2[b]=nums[i];
            i++;
            b++;
            if(i==a && flag){
                i=0;
                a=a-k;
                flag=false;
            }
        }
        nums=nums2;
    }
};