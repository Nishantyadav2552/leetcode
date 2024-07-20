#include <stdio.h>
int smallestEvenMultiple(int n) {
    int t = 2*n;
    int val = 2;
    while (1)
    {
        if (val%t == 0)
        {
            return val;
        }else
        {
            val++;
        }
        
        
    }
    
}
int main(){
    printf("%d",smallestEvenMultiple(5));
}