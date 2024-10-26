#include<iostream>
#include<vector>
using namespace std;
int main(){
    int maxProfit = 0;
    vector <int> prices = {7,1,5,3,6,4};
    int len = prices.size();
    int bestBuy = prices[0];
    for(int i = 1; i < len;i++){
        if(prices[i] > bestBuy) maxProfit = max(maxProfit,prices[i] - bestBuy);
        bestBuy = min(bestBuy,prices[i]);
    }
    cout << "Maximum profit is : " << maxProfit << endl;
    return 0;
}