class Solution {
public:
    int addDigits(int num) {
        int add {};
        while(num)
        {
            add += num %10;
            num /= 10;
        }
        if(add > 9)
        {
            return addDigits(add);
        }
        return add;
    }
};