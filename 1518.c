#include <stdio.h>
int numWaterBottles(int numBottles, int numExchange) {
    int empty = 0;
    int drink = numBottles;
    int extras = 0;
    empty = numBottles;
    while (empty>=numExchange)
    {
        drink = drink + (empty/numExchange);
        extras = empty%numExchange;
        empty = (empty/numExchange)+extras;
    }
    return drink;
}
int main(){
    int result = numWaterBottles(15,4);
    printf("%d",result);
}