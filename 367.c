#include <stdio.h>
#include <stdbool.h>
bool isPerfectSquare(int num) {
    int i = 0;
    while (i*i <= num)
    {
        if (i*i == num)
        {
            return true;
        }
        i++;
    }
    return false;
}
int main(){
    printf("%d",isPerfectSquare(1073741824));
}