class Solution {
public:
  bool wordBreak(string s, vector<string>& wordDict) {
	// remove duplicates from dictionary
	unordered_set<string> word_set(wordDict.begin(), wordDict.end());
	auto slen = s.size();
	vector<bool> dp(slen + 1, false);
	dp[0] = true;
	for (int e = 0; e <= slen; ++e) {
		for (int b = e; b >= 0; --b) {
			if (dp[b] && word_set.count(s.substr(b, e - b)) > 0) {
				// substring begins at location 'b' and end at location 'e'
				// set location 'e' to true, if substring is in the dictionary & the last word before the substring is also true
				dp[e] = true;
				break;
			}
		}
	}
	return dp[slen];
}
};