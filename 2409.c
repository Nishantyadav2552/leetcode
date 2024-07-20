#include <stdio.h>
#include <stdlib.h>
int tellmonth(char* string){
    char val[2];
    val[2] = '\0';
    for (int i = 0; i < 2; i++)
    {
        val[i] = string[i];
    }
    int value = atoi(val);
    return value;
}
int tellday(char* string){
    char val[2];
    val[2] = '\0';
    for (int i = 3; i < 5; i++)
    {
        val[i] = string[i];
    }
    printf("%s ",val);
    int value = atoi(val);
    return value;
}
int main(){
    char string[] = "11-09";
    int month = tellmonth(string);
    int day = tellday(string);
    printf("%d ",month);
    printf("%d",day);
    

}