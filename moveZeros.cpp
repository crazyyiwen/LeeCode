/*
Given an array nums, write a function to move all 0's to the end 
of it while maintaining the relative order of the non-zero elements.

Note:
You must do this in-place without making a copy of the array.
Minimize the total number of operations.
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int _size = nums.size();
        int mid = 0;
        for(int i=0; i<(_size-1); i++){
            if(nums.at(i) != 0)
                ;
            else{
                for(int j=(i+1); j<_size; j++){
                    if(nums.at(j) != 0){
                        mid = nums.at(i);
                        nums.at(i) = nums.at(j);
                        nums.at(j) = mid;
                        break;
                    }
                    else
                        ;
                }
            }
        }
    }
};
