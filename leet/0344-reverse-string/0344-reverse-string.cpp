class Solution {
public:
    void swap(int a, int b, vector<char> &s){
        char temp= s[a];
        s[a]=s[b];
        s[b]=temp;
    }
    void reverseString(vector<char>& s) {
        int low=0;
        int high=s.size()-1;
        while(low<high){
            swap(low,high,s);
            low++;
            high--;
        }
    }
};