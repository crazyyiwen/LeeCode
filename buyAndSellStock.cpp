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
