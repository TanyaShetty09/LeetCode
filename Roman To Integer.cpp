// //Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000
// For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

// Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

// I can be placed before V (5) and X (10) to make 4 and 9. 
// X can be placed before L (50) and C (100) to make 40 and 90. 
// C can be placed before D (500) and M (1000) to make 400 and 900.
// Given a roman numeral, convert it to an integer.

class Solution {
public:
    int romanToInt(string s) {
        int n,sum=0;
        for(int i=0;i<s.size();i++){
            switch(s[i]){
                case 'I':if(i+1<s.size()&&(s[i+1]=='V'||s[i+1]=='X'||s[i+1]=='L'||s[i+1]=='C'||s[i+1]=='D'||s[i+1]=='M')){
                    if(s[i+1]=='V') n=4;
                    else if(s[i+1]=='X') n=9;
                    else if(s[i+1]=='L') n=49;
                    else if(s[i+1]=='C') n=99;
                    else if(s[i+1]=='D') n=499;
                    else if(s[i+1]=='M') n=999;
                    i=i+1;
                }
                else{
                    n=1;
                }
                sum+=n;
                break;
                case 'V':if(i+1<s.size()&&(s[i+1]=='X'||s[i+1]=='L'||s[i+1]=='C'||s[i+1]=='D'||s[i+1]=='M')){
                    if(i+1<s.size()&&s[i+1]=='X') n=5;
                    else if(s[i+1]=='L') n=45;
                    else if(s[i+1]=='C') n=95;
                    else if(s[i+1]=='D') n=495;
                    else if(s[i+1]=='M') n=995;
                    i=i+1;
                }
                else{
                    n=5;
                }
                sum+=n;
                break;
                case 'X':if(i+1<s.size()&&(s[i+1]=='L'||s[i+1]=='C'||s[i+1]=='D'||s[i+1]=='M')){
                    if(s[i+1]=='L') n=40;
                    else if(s[i+1]=='C') n=90;
                    else if(s[i+1]=='D') n=490;
                    else if(s[i+1]=='M') n=990;
                    i=i+1;
                }
                else{
                    n=10;
                }
                sum+=n;
                break;
                case 'L':if(i+1<s.size()&&(s[i+1]=='C'||s[i+1]=='D'||s[i+1]=='M')){
                    if(s[i+1]=='C') n=50;
                    else if(s[i+1]=='D') n=450;
                    else if(s[i+1]=='M') n=950;
                    i=i+1;
                }
                else{
                    n=50;
                }
                sum+=n;
                break;
                case 'C':if(i+1<s.size()&&(s[i+1]=='D'||s[i+1]=='M')){
                    if(s[i+1]=='D') n=400;
                    else if(s[i+1]=='M') n=900;
                    i=i+1;
                }
                else{
                    n=100;
                }
                sum+=n;
                break;
                case 'D':if(i+1<s.size()&&(s[i+1]=='M')){
                    if(s[i+1]=='M') n=500;
                    i=i+1;
                }
                else{
                    n=500;
                }
                sum+=n;
                break;
                case 'M': n=1000;
                sum+=n;
                break;
            }
        }
        return sum;
    }
};