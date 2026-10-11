class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st;
        int last;
        int cnt=0;
        int maxi=0;
        for(int num:nums){
            st.insert(num);
        }
        for (auto it : st) {
        if (st.find(it - 1) == st.end()) {
        int cnt = 1;
        int x = it;
        while (st.find(x + 1) != st.end()) {
        x = x + 1;
        cnt = cnt + 1;
        }
        maxi = max(maxi, cnt);
        }
        }
        return maxi;
    }
};