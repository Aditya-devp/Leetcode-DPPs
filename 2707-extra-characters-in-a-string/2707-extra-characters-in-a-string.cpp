class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
        int size = s.length() + 1;
        vector<int> dp(size);
        dp[0] = 0;

        unordered_set<string> ans(dictionary.begin(), dictionary.end());

        for (int i = 1; i <= s.length(); i++) {
            dp[i] = dp[i - 1] + 1;
            for (int j = 1; j <= i; j++) {
                if (ans.find(s.substr(i - j, j)) != ans.end()) {
                    dp[i] = min(dp[i], dp[i - j]);
                }
            }
        }
        return dp[size-1];
    }
};