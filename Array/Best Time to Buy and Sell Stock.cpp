class Solution {
public:
int maxProfit(vector& prices) {
if (prices.size() <= 1){
return 0;
}
int size = prices.size();
int iterator, maxProfit = 0;
int currentPointer = 1;
int lowestPricePointer = 0; //var to keep track of the lowest element
for(iterator = 1; iterator < size; iterator++){
if (prices[currentPointer] > prices[lowestPricePointer]) {
maxProfit = max(prices[currentPointer] - prices[lowestPricePointer], maxProfit);
}
else{
lowestPricePointer = currentPointer;
}
currentPointer += 1;

    }
    return maxProfit;
}
};
