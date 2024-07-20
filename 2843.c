#include <stdio.h>
int issym(int n){
    int temp =n;
    int digitts =0;
    int sum1 = 0;
    int sum2 =0 ;
     while(n!=0){
            int val = n%10;
            n = n/10;
            sum1+=val;
            digitts++;
        }
        if (digitts%2 != 0)
        {
            return 0;
        }
        
        int i =0;
        while (i<digitts/2)
        {
            
            sum2 += temp%10;
            temp = temp/10;
            i++;
        }
        if ((2*sum2) == sum1)
        {
            return 1;
        }else
        {
            return 0;
        }
}
int countSymmetricIntegers(int low, int high){
     int count =0;
     for (int i = low; i < high+1; i++)
     {
        if (issym(i))
        {
            count++;
        }
        
     }
     return count;
}
int main(){
    int result = countSymmetricIntegers(1200,1230);
    printf("%d",result);
}