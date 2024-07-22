#include <stdio.h>
#define INT_MAX
int* constructRectangle(int area, int* returnSize) {
    int min_diff = INT_MAX;
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));
    for (int b = 1; b < area/2; b++)
    {
        int l = area/b;
        if (area % b == 0 &&  b<=l && (l-b) < min_diff)
        {
            result[0] = b;
            result[1] = l;
            min_diff = l-b;
        }
        
    }
    return result;
}
int main(){
    int* result = (int*)malloc(2 * sizeof(int));
    int returnsize;
    result = constructRectangle(8,&returnsize);
}