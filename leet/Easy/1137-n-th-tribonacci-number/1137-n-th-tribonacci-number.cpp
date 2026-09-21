class Solution {
public:
    int t(vector<int> &arr,int n){
        if(arr[n]!=-1){
            return arr[n];
        }
        if(n<0){
            return 0;
        }
        if(n==0){
            return 0;
        }
        else if(n==1||n==2){
            return 1;
        }
        else{
            arr[n]=t(arr,n-3)+t(arr,n-2)+t(arr,n-1);
            return arr[n];
        }
    }
    int tribonacci(int n) {
        vector<int> arr(n+1,-1);
        return t(arr,n);
    }
};