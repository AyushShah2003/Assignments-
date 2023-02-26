class Solution {
public:
    bool canJumpFromPos(vector<int>& nums, int pos){
        int N = nums.size();
        if(pos == N-1) return true;
        
        int furthestJump = min(pos+nums[pos], N-1);
        // for(int nextPos = pos+1; nextPos <= furthestJump; nextPos++){
        for(int nextPos = furthestJump; nextPos > pos; nextPos--){
            if(canJumpFromPos(nums, nextPos)){
                return true;
            }
        }
        
        return false;
    };
    
    bool canJump(vector<int>& nums) {
        return canJumpFromPos(nums, 0);
    }
};
