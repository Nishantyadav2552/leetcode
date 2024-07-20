#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int partitionString(char* s) {
    int n = strlen(s);
    int res = 1;
    bool used[26] = {false};
    
    for (int i = 0; i < n; i++) {
        int idx = s[i] - 'a';
        if (used[idx]) {
            memset(used, false, sizeof(used));
            res++;
        }
        used[idx] = true;
    }
    
    return res;
}

int main() {
    char s[] = "abacab";
    printf("%d\n", partitionString(s));
    return 0;
}