#include<iostream>
#include<climits>
using namespace std;


// Best Time to Buy and Sell Stock
// Time Complexity: O(n)
// Space Complexity: O(1)

int main(){
    int prices[]={7,1,4,5,6,2,3};
    int n=sizeof(prices)/sizeof(prices[0]);
    int bestBuy=prices[0],sellDay;
    int maxProfit=0;
    for(int i=1;i<n;i++){
        sellDay=prices[i];
        int profit=sellDay-bestBuy;
        maxProfit=max(maxProfit,profit);
        bestBuy=min(bestBuy,prices[i]);
    }

    cout<<"Maximum profit is : "<<maxProfit<<endl;

    return 0;
}