class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> num_set(nums.begin(), nums.end());
        int longest_streak = 0;
        for (int num : num_set) {
            // Only check for the starting number of a sequence
            if (num_set.count(num - 1) == 0) {
                int current_num = num;
                int current_streak = 1;
                // Count the length of the consecutive sequence
                while (num_set.count(current_num + 1) != 0) {
                    current_num++;
                    current_streak++;
                }
                // Update the longest consecutive streak
                longest_streak = max(longest_streak, current_streak);
            }
        }
        return longest_streak;
    }
};
