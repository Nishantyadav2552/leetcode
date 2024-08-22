#include <stdio.h>
#include <stdlib.h>
int canJump(int* nums, int numsSize) {
    int position = 0;
    while(position < numsSize){
        printf(" *%d* ",position);
        int jump = nums[position];
        position = position + jump;
        
    }
    if(position == (numsSize-1)){
        return 1;
    }else{
        return 0;
    }
}
int main()
{
    int nums[5] = {2,3,1,1,4};
    int value = canJump(nums,5);
    printf("%d",value);
}
for (
     i = 0; i < count; i++)
{
    /* code */
}
