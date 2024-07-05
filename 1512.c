#include <stdio.h>
int numIdenticalPairs(int* arr, int numsSize) {
    int pairs = 0;
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i+1; j < numsSize; j++)
        {
            if (arr[i] == arr[j])
            {
                pairs++;
            }
            
        }
        
    }
    return pairs;
}
int main(){
    int arr[6] = {1,2,3,1,1,3};
    int result = numIdenticalPairs(arr,6);
    printf("%d",result);
}