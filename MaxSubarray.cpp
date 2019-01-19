/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.
Example:
Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Follow up:
If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int largest_num = nums.at(0);
        int total_num = 0;
        int i;
        int _size = nums.size();
        for(i=0; i<_size-1; i++){
            if(_size == 0){
                return 0;
            }
            else if(_size == 1){
                largest_num = nums.at(0);
                return largest_num;
            }
            
            if(nums.at(i) > largest_num){
                largest_num = nums.at(i);
                total_num = nums.at(i);
            }
            else{
                total_num = nums.at(i);
            }
            for(int j=i+1; j<_size; j++){
                if(total_num + nums.at(j) > largest_num){
                    total_num += nums.at(j);
                    largest_num = total_num;
                }
                else{
                    total_num += nums.at(j);
                }
            }
        }
        if(i == _size - 1){
            if(nums.at(i) > largest_num){
                return nums.at(i);
            }
        }
        return largest_num;
    }
};
