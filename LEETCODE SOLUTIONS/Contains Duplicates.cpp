class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> m;
        for (auto item : nums) {
            if (m.find(item) != m.end()) return true;
            m[item]=true;
        }
        return false;
    }
};
