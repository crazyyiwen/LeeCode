/*
Given a sorted array and a target value, return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int _size = nums.size();
        for(int i=0; i<_size; i++){
            if(target <= nums.at(i))
                return i;
            else if(target > nums.at(i))
                ;
        }
        return _size;
    }
};
