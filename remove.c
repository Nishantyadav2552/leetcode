#include <stdio.h>
#define MAX 10
void removeelement(int *arr,int n,int arr_length){
    int dummy[MAX];
    int k = 0;
    for (int i = 0; i < 6; i++)
    {
        if(arr[i] != 2){
            dummy[k]=arr[i];
            k++;
        }
    }  
    for (int i = 0; i <k; i++)
    {
        arr[i]=dummy[i];
    } 
};
int main(){
    int arr[5] = {2,3,2,4,5};
    int k = 2;
    removeelement(arr,2,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    
}