#include <stdio.h>
int encrypted(int n){
    int digits = 0;
    int max =0;
    while (n!=0)
    {
        int val = n%10;
        n = n/10;
        if (val > max)
        {
            max = val;
        }
        digits++;
    }
    printf("%d ",max);
    for (int i = 0; i < digits; i++)
    {
        n = n*10 + max;
    }
    return n;
}
int main()
{
    int n;
   
    int k = encrypted(10);
    printf("%d",k);
}