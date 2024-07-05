#include <stdio.h>
int minimumOperations(int* nums, int numsSize) {
    int operation = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int val = nums[i]%3;
        if(val==1 || val == 2){
            operation+=1;
        }
    }
    return operation;
}
int main(){
    int arr[3] = {3,6,9};
    int result = minimumOperations(arr,3);
    printf("%d",result);
}