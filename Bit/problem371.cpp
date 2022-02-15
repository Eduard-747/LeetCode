class Solution {
public:
    int getSum(int a,int b) {
        if(b == 0) return a;
        int s = a ^ b;
        unsigned int c = a & b;
        return getSum(s, c << 1);
    }
};