#include <stdio.h>
int* plusOne(int* digits, int digitsSize, int* returnsize) {
    int k = 1;
     for (int i = digitsSize - 1; i >= 0; i++)
     {  
        if(digits[i] < 9){
            returnsize[i] = digits[i] + k;
            int k = 0;
        }else{
            if (k == 0)
            {
                returnsize[i] = digits[i];
            }else
            {
                returnsize[i] = 0;
                k = 1;
            }
        }
     }
    return returnsize;
}
int main(){
    int arr[5] = {1,2,9,9,9};
    int* arr1 = plusOne(arr,5,arr1);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }
    

}