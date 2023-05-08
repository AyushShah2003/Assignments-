class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev_count = 0, curr_count = 1, result = 0;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i-1]) {
                curr_count++;
            } else {
                prev_count = curr_count;
                curr_count = 1;
            }
            if (prev_count >= curr_count) {
                result++;
            }
        }
        return result;
    }
};
