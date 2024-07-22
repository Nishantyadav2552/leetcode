#include <stdio.h>
#include <stdbool.h>
bool checkPerfectNumber(int num) {
    int sum = 0;
    int val;
    for (int i = 2; i < num; i++)
    {
        if (num%i == 0)
        {
            val = num/i;
            printf(" %d ",val);
            break;
        }
    }
    for (int i = 1; i <= val; i++)
    {
        if (num%i == 0)
        {
            sum += i;
        }
        
    }
    if (sum == num)         
    {
        return true;
    }else
    {
        return false;
    }
}
int main(){
    printf("%d",checkPerfectNumber(28));
}