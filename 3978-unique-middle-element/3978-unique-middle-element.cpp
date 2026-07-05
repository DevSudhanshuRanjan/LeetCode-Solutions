class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        if (nums.size() == 1)
            return true;
        int n = nums.size();
        n = n / 2;
        for (int i = 0, j = n + 1; i < n, j < nums.size(); i++, j++) {
            if (nums[i] == nums[n] or nums[j] == nums[n])
                return false;
        }
        return true;
    }
};