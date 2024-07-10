#include <stdio.h>
int encrypted(int n){
    int digits = 0;
    int max =0;
    while (n!=0)
    {
        int val = n%10;
        n = n/10;
        if (val > max)
        {
            max = val;
        }
        digits++;
    }
    for (int i = 0; i < digits; i++)
    {
        n = n*10 + max;
    }
    return n;
}
int sumOfEncryptedInt(int* nums, int numsSize) {
    int sum = 0;
    for (int i = 0; i < numsSize; i++)
    {
        int val = encrypted(nums[i]);
        sum+= val;
    }
    return sum;
}
int main(){
    int arr[3]={10,21,31};
    int result = sumOfEncryptedInt(arr,3);
    printf("%d",result);
}