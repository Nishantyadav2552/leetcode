#include <stdio.h>
#include <string.h>

int val(char s) {
    if (s == 'I') {
        return 1;
    } else if (s == 'V') {
        return 5;
    } else if (s == 'X') {
        return 10;
    } else if (s == 'L') {
        return 50;
    } else if (s == 'C') {
        return 100;
    } else if (s == 'D') {
        return 500;
    } else if (s == 'M') {
        return 1000;
    } else {
        return 0;  // Handle invalid input
    }
}

int romanToInt(char* s) {
    int length = strlen(s);
    int result = 0;

    for (int i = length - 1; i >= 0; i--) {
        if (i < length - 1 && val(s[i]) < val(s[i + 1])) {
            result -= val(s[i]);
        } else {
            result += val(s[i]);
        }
    }
    return result;
}

int main() {
    char romanNumeral[] = "MCMIV";
    printf("The integer value of %s is %d\n", romanNumeral, romanToInt(romanNumeral));
    return 0;
}
