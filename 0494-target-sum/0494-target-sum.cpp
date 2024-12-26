class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int totalsum = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size();
        if (totalsum - target < 0 || (totalsum - target) % 2 != 0) return 0;
        int reqsum = (totalsum - target) / 2;
       vector<int>prev(reqsum+1,0);
        vector<int>curr(reqsum+1,0);

        if (nums[0] == 0) {
           prev[0] = 2;
        } else {
           prev[0] = 1;
        }
        if (nums[0] != 0 && nums[0] <= reqsum) {
          prev[nums[0]] = 1;
        }
        for (int i = 1; i < n; i++) {
            for (int j = 0; j <= reqsum; j++) {
                int notpick = prev[j];
                int pick = 0;
                if (nums[i] <= j) {
                    pick = prev[j - nums[i]];
                }
                curr[j] = pick + notpick;
            }
            prev=curr;
        }
        return prev[reqsum];
    }
};
