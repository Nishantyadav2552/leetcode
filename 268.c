#include <stdio.h>
int missingNumber(int* nums, int numsSize) {
    for (int i = 0; i <=numsSize; i++)
    {
        int ispresent = 0;
        for (int j = 0; j < numsSize; j++)
        {
            if (nums[j] == i)
            {
                continue;
            }
            ispresent++;
        }
        if (ispresent == numsSize)
        {
            return i;
        }   
    }
    return 0;
}
int main(){
    int arr[9] = {9,6,4,2,3,5,7,0,1};
    printf("%d",missingNumber(arr,9));
}