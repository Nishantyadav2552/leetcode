// shit question should be removed
#include <stdio.h>
int theMaximumAchievableX(int num, int t){
    int result = num + 2*t;
    return result;
}
int main(){
int num = 8;
int t = 5;
int result  = theMaximumAchievableX(num , t);
printf("%d",result);
return 0;
}