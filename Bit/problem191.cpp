class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count{};
        while(n)
        {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
};