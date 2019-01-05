/*
Given a non-negative index k where k ≤ 33, return the kth index row of the Pascal's triangle.
Note that the row index starts from 0.
*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> pascal(rowIndex + 1);
        int num[rowIndex + 1][rowIndex + 1];
        int n = rowIndex + 1;
        int i = 0;
        for(; i<n; i++){
            for(int j=0; j<i&&i>1; j++){
                if((i > 1) && (j < (i - 1))){
                    num[i][j + 1] = num[i - 1][j] + num[i - 1][j + 1];
                }
            }
            num[i][0] = num[i][i] = 1;
        }
        for(int k=0; k<n; k++){
            pascal.at(k) = num[rowIndex][k];
        }
        
        return pascal;
    }
};
