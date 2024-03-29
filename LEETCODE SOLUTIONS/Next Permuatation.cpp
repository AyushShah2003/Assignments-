#include<bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return;
        }
        int temp;
        for(int i=n-1;i>=0;i--){
            // for every index if any smaller available on next indices => swap both
            // else sort array from current to end
            int flag=0;
            for(int j=i+1;j<n;j++){
                if(nums[j]>nums[i]){
                    flag=1;
                    temp=nums[j];
                    nums[j]=nums[i];
                    nums[i]=temp;
                    break;
                }
            }
            if(flag==0){
                sort(nums.begin()+i,nums.end());
            }else{
                break;
            }
        }
    }
};
