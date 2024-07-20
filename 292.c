#include <stdio.h>
#include <stdbool.h>
bool canWinNim(int n) {
    return n%4 != 0;
}
int main(){
    printf("\n%d",canWinNim(9));
}