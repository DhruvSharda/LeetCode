class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<n1;i++){
            if(m[nums1[i]]==0){m[nums1[i]]++;}
        }
        for(int i=0;i<n2;i++){
            if(m[nums2[i]]==1){
                m[nums2[i]]++;
                ans.push_back(nums2[i]);
            }
        }
    return ans;
    }
};