#include <stdio.h>
#define MAX 51
double area(x1,x2,y1,y2,z1,z2){
    double area = (1/2)*(x1(y2-y3) + x2(y3-y1) + x3(y1-y2));
    return area;
}
double largestTriangleArea(int** points, int pointsSize, int* pointsColSize) {
    double maxarea = 0;
     for (int i = 0; i < pointsSize; i++)
     {
        for (int j = 0; j < pointsSize; j++)
        {
            for (int k = 0; k < pointsSize; k++)
            {
                if (i!=j && j!=k &&i!=k)
                {
                    x1 = points[i][0];
                    x2 = points[i][1];
                    y1 = points[j][0];
                    y2 = points[j][1];
                    z1 = points[k][0];
                    z2 = points[k][1];
                    double ar = area(x1,x2,y1,y2,z1,z2);
                    if (ar > maxarea)
                    {
                        maxarea = ar;
                    }
                    
            }
            
        }
        
     }
     
}
return maxarea;
}
int main(){
    int arr[MAX][MAX] = {{1,0},{0,0},{0,1}};
    int x;
    printf("%d",largestTriangleArea(arr,3,&x));
}