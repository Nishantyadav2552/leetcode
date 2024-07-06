#include <stdio.h>
int passThePillow(int n, int t) {
    int position=1;
    int time=0;
    int direction=1;
    while (time != t)
    {
        if (direction==1)
        {
            time++;
            position++;
        }else
        {
            time++;
            position--;
        }
        if (position==n || position==1)
        {
            direction *= -1;
        } 
    }
    return position;
}
int main(){
    int result = passThePillow(3,2);
    printf("%d",result);
}