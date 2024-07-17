#include <stdio.h>
#include <stdbool.h>
bool isPowerOfThree(int n) {
    int i = 1;
    while (i<=n)
    {
        if(i == n){
            return true;
        }
        i *= 3;
    }
    return false;
}
int main(){
    printf("%d",isPowerOfThree(27));
}
