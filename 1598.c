#include <stdio.h>
int minOperations(char** logs, int logsSize) {
    int position = 0;
    int i = 0;
    int step =0;
    while (i!=logsSize)
    {
        int j = 0;
        while (logs[i][j]!='/')
        {
            j++;
        }
        if (logs[i][j-1] == '.' && logs[i][j-2] == '.')
        {
            if (step=0)
            {
                continue;
            }else
            {
                step--;
            }
        }else if ((logs[i][j-1] > 'a' || logs[i][j-1] < 'z') || (logs[i][j-1] > '0' || logs[i][j-1] < '9') )
        {
            step++;
        }else
        {
            continue;
        }
        i++;
    }
    return step;
}
int main(){

}