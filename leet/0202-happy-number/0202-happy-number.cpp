class Solution {
public:
    bool isHappy(int n) {
        int a;
        int sum=n;
        unordered_set<int> s;
        while(sum!=1){
            sum=0;
        while(n!=0){
            a=n%10;
            sum+=pow(a,2);
            n/=10;
        }
        auto result=s.insert(sum);
            if(!result.second){
                return false;
            }
        n=sum;
        }
        return true;
    }
};