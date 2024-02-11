// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        vector<int> c;
        int max,count=0;
        for(int i=0;i<nums.size()-1;i++){
            count=0;
            for(int j=i;j<nums.size();j++){
                if(nums[i]==nums[j])
                    count++;
            }
            if(count>(nums.size()/2)){
                c.push_back(count);
                return nums[i];
            }
        }
        if(nums.size()==1)
            return nums[0];
        return NULL;
        
    }
};