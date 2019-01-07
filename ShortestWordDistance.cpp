/*
Given a list of words and two words word1 and word2, return the shortest distance between these two words in the list.
Note:
You may assume that word1 does not equal to word2, and word1 and word2 are both in the list.
*/
class Solution {
public:
    int shortestDistance(vector<string>& words, string word1, string word2) {
        int i = -1;
        int j = -1;
        int d1 = 0;
        int d2 = 0;
        int min = words.size();
        for(int k=0; k<words.size();){
            if(words.at(k) == word1){
                i = k;
                //k++;
                if(j != -1){
                    d1 = (i - j);
                    if(d1 == 1){
                        min = d1;
                        break;
                    }
                    else if(d1 == -1){
                        min = -d1;
                        break;
                    }
                    else if(d1 != 1 && d1 != -1){
                        if(d1 > 0 && d1 < min)
                            min = d1;
                        else if(d1 < 0 && -d1 < min)
                            min = -d1;
                        else
                            ;
                    }
                    else
                        ;
                }
            }
            else if(words.at(k) == word2){
                j = k;
               // k++;
                if(i != -1){
                    d2 = (i - j);
                    if(d2 == 1){
                        min = d2;
                        break;
                    }
                    else if(d2 == -1){
                        min = -d2;
                        break;
                    }
                    else if(d2 != 1 && d2 != -1){
                        if(d2 > 0 && d2 < min)
                            min = d2;
                        else if(d2 < 0 && -d2 < min)
                            min = -d2;
                        else
                            ;
                    }
                    else
                        ;
                }
            }
            else
               ;  
            k++;
        }
        return min;
    }
};
