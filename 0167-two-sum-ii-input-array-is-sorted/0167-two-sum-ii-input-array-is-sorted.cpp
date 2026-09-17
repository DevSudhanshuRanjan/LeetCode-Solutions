class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int left = 0;
        int right = nums.size()-1;
        while(left<right){
            if(nums[left]+nums[right] == t) return {left+1,right+1};
            else if(nums[left]+nums[right] > t )right--;
            else left++;
        }
        return {1,2};
    }
};