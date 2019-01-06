/*
Given an array of integers that is already sorted in ascending order, find two numbers such that they add up to a specific target number.
The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2.
Note:
Your returned answers (both index1 and index2) are not zero-based.
You may assume that each input would have exactly one solution and you may not use the same element twice.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //vector<int> indexNum(2);
        int _size = numbers.size();
        int i = 0;
        int j = _size - 1;
        while(i != j){
            if((numbers.at(i) + numbers.at(j)) < target){
                i++;
            }
            else if((numbers.at(i) + numbers.at(j)) > target){
                j--;
            }
            else{
                return {i+1, j+1};
            }
        }
        return {-1, -1};
    }
};
