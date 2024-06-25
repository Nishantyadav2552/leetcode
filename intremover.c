#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* removeDigit(char* number, char digit) {
    int n = strlen(number);
    char* result = NULL;

    for (int i = 0; i < n; i++) {
        if (number[i] == digit) {
            char* temp = (char*)malloc((n) * sizeof(char));
            strncpy(temp, number, i);
            strcpy(temp + i, number + i + 1);

            if (result == NULL || strcmp(temp, result) > 0) {
                free(result);
                result = temp;
            } else {
                free(temp);
            }
        }
    }

    return result;
}

int main() {
    char* str1 = "141"; 
    char digit = '1';
    char* result = removeDigit(str1, digit);
    printf("Result: %s\n", result);
    free(result); 
    return 0;
}
