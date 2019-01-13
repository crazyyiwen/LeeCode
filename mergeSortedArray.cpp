/*
Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.
Note:
The number of elements initialized in nums1 and nums2 are m and n respectively.
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional elements from nums2.
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int tmp1 = 0;
        int tmp2 = 0;
        int j = 0;
        for(int i=0; i<n; i++){
            for(; j<m; j++){
                if(nums2.at(i) < nums1.at(j)){
                    m++;
                    tmp1 = nums2.at(i);
                    for(int k=j; k<m; k++){
                        tmp2 = nums1.at(k);
                        nums1.at(k) = tmp1;
                        tmp1 = tmp2;
                    }
                    break;
                }
                else
                    ;
            }
            if(j == m){
                nums1.at(j) = nums2.at(i);
                m++;
                j = 0;
            }
           
        }
    }
};
