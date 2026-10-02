class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> preSumMap;
        int sum=0,maxe=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                sum+=-1;
            }
            else{
                sum+=1;
            }
            if(sum==0){
                maxe=max(maxe,i+1);
            }
            int rem=sum;
            if(preSumMap.find(rem)!=preSumMap.end()){
                int len=i-preSumMap[rem];
                maxe=max(maxe,len);
            }
            if(preSumMap.find(rem)==preSumMap.end()){
                preSumMap[sum]=i;
            }
        }
        return maxe;
    }
};