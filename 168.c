#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char whichchar(int n) {
    return 'A' + n - 1;
}

char* convertToTitle(int columnNumber) {
    char* result = (char*)malloc(sizeof(char) * 10); 
    int len = 0;
    while (columnNumber > 0) {
        int temp = columnNumber % 26;
        if (temp == 0) {
            temp = 26;
            columnNumber--;
        }
        result[len++] = whichchar(temp);
        columnNumber /= 26;
    }
    result[len] = '\0';
    for (int i = 0; i < len / 2; i++) {
        char temp = result[i];
        result[i] = result[len - i - 1];
        result[len - i - 1] = temp;
    }
    return result;
}

int main() {
    char* title = convertToTitle(701);
    printf("%s\n", title);
    free(title); 
    return 0;
}