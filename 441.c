#include <stdio.h>
int arrangeCoins(int n) {
    int row_no = 0;
    int blocks = 0;
    while(n >= blocks){
        n = n-blocks;
        blocks++;
        row_no++;
    }
    return row_no-1;
}
int main(){
    printf("%d",arrangeCoins(8));
}