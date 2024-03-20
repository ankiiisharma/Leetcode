class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        if (strs.empty()) return ans;
        for (int i = 0; i < strs[0].length(); i++) {
            for (const auto& str : strs) {
                if (i >= str.length() || strs[0][i] != str[i]) {
                    return ans;
                }
            }
            ans.push_back(strs[0][i]);
        }
        return ans;
    }
};
