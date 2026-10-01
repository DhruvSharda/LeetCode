class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> preSumMap;
        int sum=0,count=0;
        int n=nums.size();
        preSumMap[0] = 1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem=sum-k;
            if(preSumMap.find(rem)!=preSumMap.end()){
                count+=preSumMap[rem];
            }
            //find does not give bool it gives iterator, so if it found it never reaches end and is untrue
            preSumMap[sum]++;
        }
        return count;
    }
};