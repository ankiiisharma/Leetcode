class Solution {
public:
    int countGoodSubstrings(string s) {
         int count = 0;
    for (int i = 0; i < s.length() - 2; i++) {
        set<char> charSet;
        for (int j = i; j < i + 3; j++) {
            charSet.insert(s[j]);
        }
        if (charSet.size() == 3) {
            count++;
        }
    }
    return count;
    }
};