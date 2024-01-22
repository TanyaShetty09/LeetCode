//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
//Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

class Solution {
public:
    int reverse(int x) {
        int n=x;
        long rem,rev=0;
        while(n!=0){
            rem=n%10;
            rev=rev*10+rem;
            n/=10;
        }
        if(rev<INT_MIN||rev>INT_MAX)
            return 0;
        return static_cast<int>(rev);
    }
};