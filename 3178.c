#include <stdio.h>
int numberOfChild(int n, int k) {
    int reversals = k / (n - 1);
    int remaining_seconds = k % (n - 1);
    if (reversals % 2 == 0) {
        return remaining_seconds;
    }
    else {
        return n - 1 - remaining_seconds;
    }
}
int main(){
    int result = numberOfChild(3,5);
    printf("%d",result);
}