#include <stdio.h>
int pivotInteger(int n) {
    if(n==1){
        return 1;
    }
    for (int i = 2; i < n; i++)
    {
        if ((i*(i+1)/2) == (n*(n+1)/2) - i*(i+1)/2 + i)
        {
            return i;
        }
        
    }
    return -1;
    
}
int main(){
    int result = pivotInteger(1);
    printf("%d",result);
}