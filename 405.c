#include <stdio.h>
#include <string.h>

#define MAX 100

char val(int val) {
    char arr[6] = "abcdef";
    if (val < 10) {
        return '0' + val;
    } else {
        return arr[val - 10];
    }
}
unsigned int fifteen_complement(int num) {
    unsigned int result = ~num + 1; 
    return result & 0xFFFF;
}
char* toHex(int num1) {
    char str[MAX];
    int i = 0;
    unsigned int num;
    if (num1 < 0)
    {
        num = fifteen_complement(num);
    }else
    {
        num = num1;
    }
    
    
    while (num > 0) {
        int value = num % 16;
        str[i] = val(value);
        i++;
        num /= 16;
    }
    str[i] = '\0';
    for (int j = 0; j < i / 2; j++) {
        char temp = str[j];
        str[j] = str[i - 1 - j];
        str[i - 1 - j] = temp;
    }
    return strdup(str);
}
int main() {
    int num = -1;
    char str[MAX];
    strcpy(str, toHex(num));
    printf("%s\n", str);
    return 0;
}