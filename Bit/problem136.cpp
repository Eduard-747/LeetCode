class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singlenum{};
        for(const int & i: nums)
        {
            singlenum ^= i;
        }
        return singlenum;
    }
};