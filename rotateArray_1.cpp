/*
Given an array, rotate the array to the right by k steps, where k is non-negative.
*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int mid = 0;
        for(int i=0; i<k; i++){
            mid = nums.back();
            nums.pop_back();
            nums.insert(nums.begin(), mid);
        }
    }
};
