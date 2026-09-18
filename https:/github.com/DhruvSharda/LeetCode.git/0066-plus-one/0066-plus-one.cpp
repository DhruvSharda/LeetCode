class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int d=digits.size();
            int a=digits[d-1]+1;
            digits[d-1]+=1;
            int n=2;
            while(a%10==0){
                digits[d-n+1]=0;
                if(d-n<0){
                    digits.insert(digits.begin(),1);
                    d++;
                    break;
                }
                a=digits[d-n]+1;
                digits[d-n]+=1;
                n++;
            }
        return digits;
    }
};