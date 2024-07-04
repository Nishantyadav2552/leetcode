#include <stdio.h>
int sumOfTheDigitsOfHarshadNumber(int x) {
    if (x>=1 && x<=100)
    {
        int sum = 0;
        int temp = x;
        while (temp != 0)
        {
            sum += (temp%10);
            temp = temp/10;
        }
        if (x%sum == 0)
       {
             return sum;
       }else
       {
        return -1;
        }  
    }else
    {
        return -1;
    } 
}
int main(){
    int x = 101;
    int result = sumOfTheDigitsOfHarshadNumber(x);
    printf("%d",result);
    return 0;
}