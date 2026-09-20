class Solution {
public:
    bool isThree(int n) {
        int count=0;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                count+=2;
            }
            if(i==sqrt(n)){
                count--;
            }
        }
        if(count==3){
            return true;
        }
        return false;
    }
};