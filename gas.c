#include <stdio.h>
int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize) {
    for (int i = 0; i < gasSize; i++)
    {
        int tank = gas[i]-cost[i];
        for (int j = i+1; j < gasSize; j++)
        {
            tank = tank + gas[j] - cost[j];
            if (tank < 0)
            {
                break;
            }
            
        }
        for (int j = 0; j <= i; j++)
        {
            tank = tank + gas[j] - cost[j];
            if (tank < 0)
            {
                break;
            }
        } 
        if (tank >= 0)
        {
            return i;
        }
    }
    return -1;
}
int main(){
    int gas[6] = {4,5,2,6,5,3}; 
    int cost[6]= {3,2,7,3,2,9};
    int station = canCompleteCircuit(gas,6,cost,6);
    printf("%d",station);
}