class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2)
            return 0;

        vector<bool> isComposite(n, false);

        int count = n / 2;  // 2 + all odd numbers >= 3

        for (int i = 3; i * i < n; i += 2) {
            if (!isComposite[i]) {
                for (int j = i * i; j < n; j += 2 * i) {
                    if (!isComposite[j]) {
                        isComposite[j] = true;
                        count--;
                    }
                }
            }
        }

        return count;
    }
};