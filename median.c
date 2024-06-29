#include <stdio.h>
#define MAX 100
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double arr[MAX];
    int arrsize = nums1Size + nums2Size;
    int i = 0;
    int j = 0;
    int k = 0;
    double median;
    while(i < nums1Size && j < nums2Size){
        if (nums1[i] <= nums2[j])
        {
            arr[k] = nums1[i];
            i++;
            k++;
            if (k == (arrsize/2)-1)
            {
               if (arrsize % 2 == 0)
                {
                    median =(arr[k]+arr[k+1])/2;
                }else{
                    median = arr[k+1];
                } 
            }
            
        }else{
            arr[k] = nums2[j];
            j++;
            k++;
            if (k == (arrsize/2)-1)
            {
               if (arrsize % 2 == 0)
                {
                    median =(arr[k]+arr[k+1])/2;
                }else{
                    median = arr[k+1];
                } 
            }
        }  
    }
    while (i < nums1Size)
    {
        arr[k] = nums1[i];
        i++;
        k++;
        if (k == (arrsize/2)-1)
            {
               if (arrsize % 2 == 0)
                {
                    median =(arr[k]+arr[k+1])/2;
                }else{
                    median = arr[k+1];
                } 
            }
    }
    while (j < nums2Size)
    {
        arr[k] = nums2[j];
        j++;
        k++;
        if (k == (arrsize/2)-1)
            {
               if (arrsize % 2 == 0)
                {
                    median =(arr[k]+arr[k+1])/2;
                }else{
                    median = arr[k+1];
                } 
            }
    }
   
    
    
    return median;
}
int main(){
    int gas[2] = {1,2}; 
    int cost[2]= {3,4};
    double median = findMedianSortedArrays(gas,2,cost,2);
    printf("%f",median);
}