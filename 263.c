#include <stdio.h>
#include <stdbool.h>
bool isUgly(int n) {
    while (n%2 == 0 || n%3==0 || n%5==0)
    {
        if (n%2 == 0)
        {
            n = n/2;
        }
        if (n%3 == 0)
        {
            n = n/3;
        }
        if (n%5 == 0)
        {
            n= n/5;
        } 
    }
    if (n>1)
    {
        return 0;
    }
    return 1;
}
int main(){
    printf("%d",isUgly(14));
}