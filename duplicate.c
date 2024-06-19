#include <stdio.h>
#define MAX 1000
int removeDuplicates(int* nums, int numsSize) {
    int dummy[MAX];
    int k = 0;
    for(int i = 0;i<numsSize;i++){
        int is_duplicate = 0;
        for(int j=0;j<=k;j++){
            if(dummy[j]==nums[i]){
                is_duplicate = 1;
            }
        }
        if(!is_duplicate){
            dummy[k] = nums[i];
            k++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        nums[i] = dummy[i];
    }
    return k;
}
int main(){
    int arr[2] = {1,1};
    int k = removeDuplicates(arr,2);
    for (int i = 0; i < 2; i++)
    {
        printf("%d ",arr[i]);
    }
}