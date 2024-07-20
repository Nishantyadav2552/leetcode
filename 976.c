#include <stdio.h>
void sort(int* arr,int numssize){
    for (int i = 0; i < numssize-1; i++)
    {
        for (int j = i+1; j < numssize; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
void display(int * arr,int count){
    for (int i = 0; i < count; i++)
    {
        printf("%d ",arr[i]);
    }
    
}
long int largestPerimeter(int* arr, long int count) {
    long int MAX_PERI = 0;
    sort(arr,count);
    for (int i = 0; i < count-2; i++)
    {
        int j = i+1;
        int k = j+1;
        if (arr[i] + arr[j] > arr[k] && arr[i] + arr[k] > arr[j] && arr[k] + arr[j] > arr[i])
        {
            int perimeter = arr[i] + arr[j] +arr[k];
            if (MAX_PERI < perimeter)
            {
                MAX_PERI = perimeter;
            }
            
        }
        
    }
    
    return MAX_PERI;
}
int main(){
    int arr[3] = {2,1,2};
    int result = largestPerimeter(arr,3);
    printf("%d",result);
}