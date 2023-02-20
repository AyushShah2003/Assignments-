//AYUSH SHAH
class Solution {
public:
	int numPairsDivisibleBy60(vector<int>& time) {
		vector<int> remainder_count(61); long long int ans = 0;
		for(int x : time) remainder_count[x % 60]++;
		remainder_count[60] = remainder_count[0];
		for(int i = 1; i < 30; i++) {
			ans += remainder_count[i] * remainder_count[60-i];
		}
		ans += remainder_count[0] * (remainder_count[0]-1) / 2;
		ans += remainder_count[30] * (remainder_count[30]-1) / 2;
		return ans;
	}	
};
