#include <stdio.h>
double averageWaitingTime(int** customers, int customersSize, int* customersColSize) {
    double total = 0;
    int timing = customers[0][0];  
    for (int i = 0; i < customersSize; i++) {
        if(timing >= customers[i][0]){
            timing += customers[i][1];
        }else{
            timing = customers[i][0];
            timing += customers[i][1];
        }
        total += timing - customers[i][0];
    }
    double result = total / customersSize;
    return result;
}

int main() {
    // Example input
    int customers[][2] = {{5, 2}, {5, 4}, {10, 3}, {20, 1}};
    int customersSize = sizeof(customers) / sizeof(customers[0]);  // Calculate number of customers
    int colsize;
    // Calculate average waiting time
    double avgWaitingTime = averageWaitingTime(customers, customersSize,&colsize);
    
    // Output the result
    printf("Average waiting time: %.2f\n", avgWaitingTime);
    
    return 0;
}

