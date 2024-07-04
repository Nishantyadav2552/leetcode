#include <stdio.h>
double* convertTemperature(double celsius, int* returnSize) {
    double* result = (double*)malloc(2 * sizeof(double));
    result[0] = celsius + 273.15;
    result[1] = celsius * 9/5 + 32;
    *returnSize = 2;
    
    return result;
}

int main(){
    double x = 9;
    int size;
    int result[2] = convertTemperature(x,&size);
}