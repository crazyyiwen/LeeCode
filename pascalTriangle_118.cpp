/*
Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.
*/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        vector<int> subresult;
        if(numRows == 0){
            return result;
        }
        else if(numRows == 1){
            subresult.push_back(1);
            result.push_back(subresult);
            return result;
        }
        else if(numRows == 2){
            subresult.push_back(1);
            result.push_back(subresult);
            subresult.push_back(1);
            result.push_back(subresult);
            return result;
        }
        else{
            for(int i=1; i<=numRows; i++){
                if(i == 1){
                subresult.push_back(1);
                result.push_back(subresult);
                }
                else if(i == 2){
                    subresult.push_back(1);
                    result.push_back(subresult);
                }
                else{
                    subresult.clear();
                    subresult.push_back(1);
                    for(int j=0; j<i-2; j++){
                        subresult.push_back(result.at(i-2).at(j) + result.at(i-2).at(j+1));
                    }
                    subresult.push_back(1);
                    result.push_back(subresult);
                }
            } 
        return result;
        }
    }
};
