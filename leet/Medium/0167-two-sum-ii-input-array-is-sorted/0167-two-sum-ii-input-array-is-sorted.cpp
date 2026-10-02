class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        unordered_map<int,int> m;
        int n=numbers.size();
        for(int i=0;i<n;i++){
            int rem=target-numbers[i];
            if(m.find(rem)!=m.end()){
                if(i<m.find(rem)->second-1){
                    ans.push_back(i+1);
                    ans.push_back(m.find(rem)->second);
                    return ans;
                }
                else if(i>m.find(rem)->second-1){
                ans.push_back(m.find(rem)->second);
                ans.push_back(i+1);
                return ans;}
            }
            m[numbers[i]]=i+1;
        }
        return ans;
    }
};