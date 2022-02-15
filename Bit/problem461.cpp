class Solution {
public:
    int hammingDistance(int x, int y) {
        int Hamming_distance {};
        x ^= y;
        while(x)
        {
            Hamming_distance += x & 1;
            x >>= 1;
        }
        return Hamming_distance;
    }
};