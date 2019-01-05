/*
Given a non-empty array of digits representing a non-negative integer, plus one to the integer.
The digits are stored such that the most significant digit is at the head of the list,
and each element in the array contain a single digit.
You may assume the integer does not contain any leading zero, except the number 0 itself.
*/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int _size = digits.size();
        int i = 0;
        for(; (i<_size) && (digits.at(_size - i - 1) == 9); i++){
            digits.at(_size - i - 1) = 0;
        }
        if(i == _size)
            digits.insert(digits.begin(), 1);
        else
            digits.at(_size - i - 1)++;
        return digits;
    }
};
