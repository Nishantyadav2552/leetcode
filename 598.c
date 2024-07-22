#include <stdio.h>
int max(int ops,int m,int n){
    int max = 0;
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ops[i][j]>max)
            {
                max = ops[i][j];
                count = 1;
            }else if (ops[i][j] == max)
            {
                count++;
            }
            
            
        }
        
    }
    return count;
}
int maxCount(int m, int n, int** ops, int opsSize, int* opsColSize) {
    int arr[m][n] = {0};
    for (int i = 0; i < opsSize; i++)
    {
        int row = ops[i][0];
        int col = ops[i][1];
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                arr[j][k]++;
            }  
        }    
    }
    int result = max(arr,m,n); 
    return result;   
}
int main(){

}