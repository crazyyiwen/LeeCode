/*
Say you have an array for which the ith element is the price of a given stock on day i.
If you were only permitted to complete at most one transaction (i.e., buy one and sell one share of the stock), design an algorithm to find the maximum profit.
Note that you cannot sell a stock before you buy one.
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dif = 0;
        int _size = prices.size();
        for(int i=0; i<_size-1; i++){
            for(int j=i+1; j<_size; j++){
                if(prices.at(i) < prices.at(j)){
                    if(dif < (prices.at(j) - prices.at(i)))
                        dif = (prices.at(j) - prices.at(i));
                }
            }
        }
        return dif;
    }
};

// faster method only one for loop
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int dif = 0;
        int _size = prices.size();
        if(_size == 0)
            return dif;
        int min_num = prices.at(0);
        for(int i=1; i<_size; i++){
            if(prices.at(i) < min_num)
                min_num = prices.at(i);
            else if((prices.at(i) - min_num) > dif)
                dif = prices.at(i) - min_num;
        }
        return dif;
    }
};
