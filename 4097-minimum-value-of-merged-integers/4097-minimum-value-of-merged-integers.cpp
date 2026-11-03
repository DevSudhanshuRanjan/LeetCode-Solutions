class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i = 0; i < nums.size() - 1; i+=2){
            string s1 = to_string(nums[i]), s2 = to_string(nums[i+1]), s3 = s1+s2;
            int concatinated = stoi(s3);
            mini = min(concatinated,mini);
        }
        return mini;
    }
};