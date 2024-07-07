#include <stdio.h>
int reverse(int n){
    int r=0;
    while (n!=0){
         int x = n%10;
         r = x + (r*10);
         n = n/10;
    }
    return r;
}
int main()
{
    int n;
    printf("enter the number to be reversed");
    scanf("%d",&n);
    int k = reverse(n);
    printf("%d",k);

    printf("done");
}
