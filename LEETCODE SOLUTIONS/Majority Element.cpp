class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res=0;
        for(int i=0; i<32; i++) {
            int ones=0;
            for(auto x: nums) {
                ones+=((x>>i)&1);
            }
            if(ones>nums.size()-ones) {
                res|=(1<<i);
            }
        }
        return res;
    }
};
