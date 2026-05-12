class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        vector<int> abc(26);
        for (size_t i = 0; i < s.size(); ++i) {
            char c = s[i];
            abc[c - 'a'] += 1;
        }
        for (size_t i = 0; i < t.size(); ++i) {
            char c = t[i];
            abc[c - 'a'] -= 1;
        }
        for (size_t i = 0; i < 26; ++i) {
            if (abc[i] != 0) return false;
        }
        return true;
    }
};
