class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int> Union;
        while(j<n){
            if(nums1[i]<=nums2[j] && i<m){
                Union.push_back(nums1[i]);
                i++;
            }
            else{
                Union.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            Union.push_back(nums1[i]);
            i++;
        }
        if(m==0){
            Union=nums2;
        }
        if(n==0){
            Union=nums1;
        }
        nums1=Union;
    }
};