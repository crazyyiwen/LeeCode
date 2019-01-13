/*
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, find the one that is missing from the array.
Note:
Your algorithm should run in linear runtime complexity. Could you implement it using only constant extra space complexity?
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int total = (0 + nums.size())*(nums.size() + 1)/2;
        for(int i=0; i<nums.size(); i++){
            total -= nums.at(i);
        }
        return total;
    }
};
