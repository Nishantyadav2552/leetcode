#include <stdio.h>
long long int factorial(int n)  
{  
  if (n == 0)  
    return 1;  
  else  
    return(n * factorial(n-1));  
}  
int findways(int n){
    int ways;
    int s2;
    int s1;
    long int result = 0;
    long int i=0;
    if( n%2 == 0){
        result = 1;
    }
    while (i!=n)
    {
        s2 = i;
        s1 = n-i;
        if (s2%2 == 0)
        {
            ways = (s2/2) + s1;
            long long int up = factorial(ways);
            long long int down =factorial(s1)*factorial(s2/2);
            result += (up/down);
        }
        i++;
    }
    return result;
}
long int climbStairs(int n) {
    long int result = 0;
    if(n<21){
        return findways(n);
    }else if(n>=21 && n<=40){
        return findways(20)*findways(n-20) + (findways(19)*findways(n-21));
    }else{
        return findways(20)*findways(20)*findways(n-40) + (findways(19)*findways(19)*findways(n-40)) + (findways(19)*findways(18)*findways(n-41)) + (findways(20)*findways(19)*findways(n-41));
    }
    return result;
}
int main(){
    int result = climbStairs(5);
    printf("%d",result);
}