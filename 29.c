#include <stdio.h>
#include <math.h>
long long int divide(long long int a,long long int b) {
    int sign = 1;
    long long int value = pow(2,31);
    if((a<0 && b>0)||(b<0 && a>0)){
        if(a<0){
            a*=-1;
        }else{
            b*=-1;
        }
        sign = -1;
    }
    if(a < 0 && b < 0){
        a*=-1;
        b*=-1;
    }
    printf("%d\n",a);
    printf("%d\n",b);
    long long int val = 0;
    long long int i = 0;
    while(val <= a){
        val = val + b;
        i++;
    }
    printf("%d\n",i);
    i-=1;
    i = i*sign;
    return i;
}
int main(){
    long long int result = divide(-2147483648,-1);
    printf("%d",result);
}