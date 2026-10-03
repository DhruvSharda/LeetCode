class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> el;
        unordered_map<int,int> els;
        int j=0;
        for(int i=0;i<n;i++){
            els[nums[i]]++;
        }
        for (auto p : els) {
            if (p.second > n/3) {
                el.push_back(p.first);
            }
        }
        return el;
    }
};