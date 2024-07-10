#include <stdio.h>
int findTheWinner(int n, int k) {
    int position = 0;
    int seq = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=i+1;
        printf("%d ",arr[i]);
    }
    int deleted = 0;
    while (deleted != n-1)
    {
        while (seq != k-1)
            {
                if (position == n)
                    {
                    position = 0; 
                    }else if (arr[position]==0)
                    {
                        position+=2;
                    }
                    else
                    {
                    position++;
                    }
                    seq++;
            }
        printf("%d ",arr[seq]);
        arr[seq] = 0;
        deleted++;
    }
    
    
    int result = arr[position];
    return result;
    
}
int main(){
    int res = findTheWinner(5,2);
    printf("%d",res);
    return 0;
}