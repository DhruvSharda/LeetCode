class Solution {
public:
int flagb=0;
int count=0;
int a=0;
void stuff(int n){
    while(n%5!=0){
        n--;
    }
        int b=n;
        int temp;
        while(b!=0){
            temp=b;
            while(b%5==0){
            flagb++;
            b/=5;}
        b=temp-5;}
}
    int trailingZeroes(int n) {
        stuff(n);
        return count+flagb;
    }
};