#include <stdio.h>
int sumOfMultiples(int n){
    int temp = n; 
    int sum = 0;
    while (n>=1)
    {
        if (n%3 == 0 || n%5 == 0 || n%7 == 0)
        {
            sum += n;
        }
        n--;
    }
    return sum;
}
int main(){
    int x = 9;
    int result = sumOfMultiples(x);
    printf("%d",result);
    return 0;
}