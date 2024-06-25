#include <stdio.h>
int majorityElement(int* nums, int numsSize) {
    int maj =0;
    int arr[numsSize];
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = 0; j < numsSize; j++)
        {
            if(nums[i] == nums[j]){
                maj++;
            }
        }
        arr[i] = maj;
        maj = 0;
    }
    int majindex = 0;
    for (int i = 0; i < numsSize; i++)
        {
            if(arr[i] > maj){
                maj = arr[i];
                majindex = i;
            }
        }
    int result = nums[majindex];
    return result;
}
int main(){
    int arr[10] = {1,2,3,1,1,5,6,1,1,2};
    int majority  = majorityElement(arr,10);
    printf("%d",majority);
}