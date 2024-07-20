#include <stdio.h>
#include <stdbool.h>
bool isPowerOfFour(int n) {
    int i = 1;
    while (i<=n)
    {
        if(i == n){
            return true;
        }
        i *= 4;
    }
    return false;
}
int main(){
    printf("%d",isPowerOfFour(0));
}
