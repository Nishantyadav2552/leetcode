#include <stdio.h>
long int reverse(long int x) {
    int sign = 1;
    if (x < 0) {
        sign = -1;
        x *= -1;
    }
    int value = pow(2,31);
    long int r = 0;
    while (x != 0) {
        int val = x % 10;
        printf("%d\n",r);
        if (r > value / 10 || (r == value / 10 && val > value % 10)) {
            return 0;
        }
        r = r * 10 + val;
        x = x / 10;
    }
    return r * sign;
}
int main(){
    int result = reverse(1463847412);
    printf("%d",result);
}