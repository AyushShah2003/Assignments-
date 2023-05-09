class Solution {
public:
    int getMinSwaps(string s, int k) {
        auto start = s;
        for (int i = 0; i < k; ++i) {
            next_permutation(begin(s), end(s));
        }
        int ans = 0;
        for (int i = s.size() - 1; i >= 0; --i) {
            if (start[i] == s[i]) continue;
            int j = i - 1;
            while (j >= 0 && s[j] != start[i]) --j;
            ans += i - j;
            for (; j < i; ++j) s[j] = s[j + 1];
            s[i] = start[i];
        }
        return ans;
    }
};
