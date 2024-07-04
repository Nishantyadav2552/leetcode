#include <stdio.h>
#include <stdlib.h>
#define INT_MIN
#define INT_MAX
long int divide(long int dividend, long int divisor) {
   long  int result = 0;
    int choice = 1;

    if (dividend < 0 && divisor < 0) {
        dividend = -dividend;
        divisor = -divisor;
    } else if (dividend < 0 && divisor > 0) {
        dividend = -dividend;
        choice = 2;
    } else if (dividend > 0 && divisor < 0) {
        divisor = -divisor;
        choice = 2;
    }
    while (dividend >= divisor) {
        dividend -= divisor;
        result++;
    }
    if (result <= INT_MIN)
    {
        return INT_MIN;
    }else if (result >= INT_MAX)
    {
        return INT_MAX;
    }
    
    if (choice == 2) {
        return -result;
    } else {
        return result;
    }
}

int main(){
     int d1 = 1;
     int d2 = 3;
     int result = divide(10,2);
     printf("%d",result);
}