class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxe = nums[0];

        for (int x : nums) {
            sum += x;
            maxe = max(maxe, sum);

            if (sum < 0)
                sum = 0;
        }

        return maxe;
    }
};