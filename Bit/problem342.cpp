class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n <= 0) return false;
        return !(n & (n - 1)) && ((1431655765 & n) == n);
    }
};