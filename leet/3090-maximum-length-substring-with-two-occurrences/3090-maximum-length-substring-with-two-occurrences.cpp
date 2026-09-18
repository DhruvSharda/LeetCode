class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, pair<int,int>> freq;
        int counter = 0;
        int maxlen = 0;

        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i]].first == 0) {
                freq[s[i]].second = i;
            }
            freq[s[i]].first++;
            if (freq[s[i]].first > 2) {
                maxlen = max(maxlen, counter);
                int restart = freq[s[i]].second;
                freq.clear();
                counter = 0;
                i = restart;
                continue;
            }
            counter++;
        }
        return max(maxlen, counter);
    }
};