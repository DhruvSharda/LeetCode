class Solution {
public:
    double Pov(double x, int n) {
        if(n==0){
            return 1;
        }
        double half=Pov(x,n/2);

        if(n%2==0){
            return half*half;
        }
        else{
            return half*half*x;
        }
    }
    double myPow(double x,int n){
        long long N=n;
        if(n<0){
            return 1/Pov(x,-N);
        }
        return Pov(x,N);
    }
};