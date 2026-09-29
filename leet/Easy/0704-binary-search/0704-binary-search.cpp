class Solution {
public:
    int binarySearch(int left, int right,vector<int> &arr,int t){
        int mid=left+(right-left)/2;
        if(arr[mid]==t){
            return mid;
        }
        else if(arr[mid]>t){
        right=mid-1;
        }
        else{
            left=mid+1;
        }
        if(left>right){
            return -1;
        }
        return binarySearch(left,right,arr,t);
    }
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        int ans=binarySearch(left,right,nums,target);
        return ans;
    }
};