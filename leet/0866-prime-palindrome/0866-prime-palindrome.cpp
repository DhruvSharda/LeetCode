class Solution {
public:
    int primePalindrome(int n) {
        if(n==1||n==2){
            return 2;
        }
        int result=n;
        bool exit=false;;
        while(true){
            exit=false;
            if(result%2==0){
                result++;
                continue;
            }
            int temp=result;
            int reverse=0;
            while(temp!=0){
                reverse=reverse*10+temp%10;
                temp/=10;
            }
            if(reverse!=result){
                    result++;
                    exit=true;
                }
            if(exit){
                continue;
            }
            for(int i=2;i<=sqrt(result);i++){
                if(result%i==0){
                    result++;
                    exit=true;
                }
                if(exit){
                break;
            }
            }
            if(exit){
                continue;
            }
            return result;
        }
    }
};