 
//sloution by AYush Shah
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // We have to find the first number larger than target 
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] >= target) return i;
        }
        //if  we got target is the largest
        return nums.size();
    }
};
