//*****@AYUSH SHAH ************


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 0) return -1;
        int lo = 0, hi = n - 1;
        int mid = (lo + hi) / 2;
        while(lo < hi){
            if(nums[mid] > nums[hi]) lo = mid + 1;
            else hi = mid;
            mid = (lo + hi) / 2;
        }
        int ro = lo;
        lo = 0, hi = n - 1;
        mid = (lo + hi) / 2;
        while(lo <= hi){
            int realMid = (mid + ro) % n;
            if(nums[realMid] == target) return realMid; 
            if(nums[realMid] > target) hi = mid - 1;
            else lo = mid + 1;
            mid = (lo + hi) / 2;
        }
        return -1;
    }
};
