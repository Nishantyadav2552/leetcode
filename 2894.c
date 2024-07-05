#include <stdio.h>
int differenceOfSums(int n, int m) {
    int num1=0;
    int num2=0;
    int x=n;
    while (x>=1)
    {
        if (x%m != 0)
        {
            num1+=x;
        }else{
            num2+=x;
        }
        x--;
    }
    int result = num1-num2;
    return result;
}
int main(){
    int n = 5;
    int m = 6;
    int result = differenceOfSums(n,m);
    printf("%d",result);
}