#include <stdio.h>
#include <math.h>
int digits(int n){
    int c=0;
    while(n!=0){
        n =n/10;
        c++;
    }
    return c;
}

int value(int n){
    int a = pow(10,digits(n)-2);
    return (digits(n)-1)*a;
}

int main(){
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("0");
    }
    else if(n<10){
        printf("1");
    }
    else{
        int s=0, p = pow(10,(digits(n)-1));
        while(n!=0){
            int a = n/p;
            s =s+ a*value(digits(n)) + p;
            n = n/p;
        }
        printf("%d",s);
    }
}