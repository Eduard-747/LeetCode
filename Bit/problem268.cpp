class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int missing_num {};
        for(int i = 0; i < nums.size() ; ++i)
        {
            missing_num ^= nums[i] ^ i;
        }
        return missing_num ^ nums.size();
    }
};