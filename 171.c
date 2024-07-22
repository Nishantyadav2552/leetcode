#include <stdio.h>
int val(char a){
    int val = 1;
    for (char i = 'A'; i <= 'Z'; i++)
    {
        if (a == i)
        {
            return val;
        }
        val ++;
    }
    return 0;
}
int titleToNumber(char* columnTitle) {
    int result =0 ;
    for (int i = 0; columnTitle[i]!='\0'; i++)
    {
        int value = val(columnTitle[i]);
        printf("%d isval",value);
        result = result*26 + value;
        printf(" %d ",result);
    }
    return result;
}
int main(){
    char str[] = "ZY";
    int result = titleToNumber(str);
    printf("%d",result);
}