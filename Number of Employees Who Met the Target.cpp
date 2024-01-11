// There are n employees in a company, numbered from 0 to n - 1. Each employee i has worked for hours[i] hours in the company.
// The company requires each employee to work for at least target hours.
// You are given a 0-indexed array of non-negative integers hours of length n & a non-negative integer target. Return the integer denoting the number of employees who worked at least target hours.

class Solution {
public:
    int numIdenticalPairs(vector <int>& nums) {
        int n=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]&& i<j){
                    n++;
                }  
            }
        }
        return n;
    }
};