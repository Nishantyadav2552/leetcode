#include <stdio.h>
void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize; 
    reverse(nums, 0, numsSize - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, numsSize - 1);
}

void reverse(int* nums, int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int arr[5] = {2,3,2,4,5};
    rotate(arr,5,4);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
}