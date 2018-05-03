// Given a 32-bit signed integer, reverse digits of an integer.


class Solution {
public:
    int reverse(int x) {
        long long r = 0;
        while(x) {
            r = r * 10 + x % 10;
            x /= 10;
        }
        return (r < INT_MAX && r > INT_MIN) ? r : 0;
    }
};