#include <stdio.h>
int maxProfit(int* prices, int pricesSize) {
    int profit = 0;
    int diff;
    for (int i = 0; i < pricesSize; i++)
    {
        for (int j = i; j < pricesSize; j++)
        {
            diff = prices[j] - prices[i];
            if (profit < diff)
            {
                profit = diff;
            }  
        }  
    }
    if (diff < 0)
    {
        return 0;
    }
    return profit;
}
int main(){
    int arr[6] = {7,1,5,3,6,4};
    int n = maxProfit(arr,5);
    printf("%d ",n);
}