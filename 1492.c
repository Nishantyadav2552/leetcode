#include <stdio.h>
int kthFactor(int n, int k) {
    if (n<k)
    {
        return -1;
    }
    int temp =0;
    for (int i = 1; i <=n; i++)
    {
        if(n%i == 0){
            temp++;
        }
        if (temp == k)
        {
            return i;
        }  
    }
    return -1;
    
}
int main(){
    int result = kthFactor(7,2);
    printf("%d",result);
}