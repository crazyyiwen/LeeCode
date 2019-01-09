/*
Given a sorted array nums, remove the duplicates in-place such that 
each element appear only once and return the new length.
Do not allocate extra space for another array, you must do this
by modifying the input array in-place with O(1) extra memory.
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int _size = nums.size();
        int count = 0;
        if(_size == 0)
            return 0;
        for(int i=1; i<_size; i++){
            if(nums.at(count) != nums.at(i)){
                count++;
                nums.at(count) = nums.at(i);
            }
        }
        return count+1;
    }
};
