class Solution {
public:
    bool isPalindrome(string s) {
        string rev;
        int i=0;
        int j=s.size()-1;
        char a;
        while(j>=i){
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};