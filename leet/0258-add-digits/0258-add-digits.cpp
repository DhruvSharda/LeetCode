class Solution {
public:
    int addDigits(int num) {
        while(true){
            if(num==0){
                return 0;
            }
            int sum=0;
            int digits=0;
            while(num!=0){
                sum+=num%10;
                num/=10;
                digits++;
            }
            if(digits==1){
                return sum;
            }
            num=sum;
        }
    }
};