#include <stdio.h>
int searchInsert(int* nums, int numsSize, int target) {
    int i = 0;
    while (i < numsSize && nums[i] < target) {
        i++;
    }
    return i;
}

int main(){
     int arr[4] = {1,3,5,6};
    int n = searchInsert(arr,4,7);
    printf("%d ",n);
}