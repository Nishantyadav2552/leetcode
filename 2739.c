#include <stdio.h>
int distanceTraveled(int m, int a){
   int distance = 0;
   while (m >=5 && a >=1)
    {
        m = m-5;
        distance += 50;
        a=a-1;
        m = m+1;
    }
    if (m > 0)
    {
        distance = distance + 10*m;
    }
    
    return distance;  
}
int main(){
    int result = distanceTraveled(5,10);
    printf("%d",result);
}