class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        if(n<=1){
            arr[n-1]=-1;
            return arr;
        }
        int max=-1;
        int art=0;
        for(int i=n-1;i>=0;i--){
            art=arr[i];
            arr[i]=max;   
            if(art>max){
                max=art;
                art=arr[n-1];
            }  
        }
        return arr;
    }
};