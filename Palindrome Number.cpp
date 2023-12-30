// Given an integer x, return true if x is a palindrome, and false otherwise.

class Solution {
public:
    bool isPalindrome(int x) {
        long num=x;
        long rem=0,rev=0;
        while(num>0){
            rem=num%10;
            rev=rev*10+rem;
            num/=10;
        }
        if(rev==x) 
           return true;
        else 
           return false;
    }
};