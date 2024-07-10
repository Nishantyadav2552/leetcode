#include <stdio.h>
#include <stdbool.h>
bool isHappy(long int n) {
    long int sum = n;
    long int val ;
    int count= 0;
    while (sum != 1)
    {
        val = sum;
        sum = 0;
        while (val != 0)
        {
            sum+= (val%10)*(val%10);
            val /=10;
        }
        count++;
        if(count == 20){
            return 0;
        }
    }
    return 1;
}
int main(){
    printf("%d",isHappy(4000));
}