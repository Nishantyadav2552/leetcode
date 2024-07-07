#include <stdio.h>
int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
    int alen = ax2 - ax1;
    int abre = ay2 - ay1;
    int aarea = alen*abre;
    int blen = bx2 - bx1;
    int bbre = by2 - by1;
    int barea = blen*bbre;
    if((bx1 > ax1 && bx2 < ax2)&&(by2 <ay2 && by1>ay1)){
        return aarea;
    }
    if((ay1 > by1 && ay2 < by2)&&(bx1<ax1 && ax2 < bx2)){
        return barea;
    }
    int rbre;
    int rlen;
    int rarea;
    int result;
    if (ay1 <=by2 && by2 <=ay2 && by1 <= ay1)
    {
        rbre = by2 -ay1;
    }else if (by1 <=ay2 && by2 >=ay2 && ay1 <= by1)
    {
        rbre = ay2 - by1;
    }else if(ay1 > by1 && by2 > ay2){
        rbre = abre;
    }else if(ay2>by2 && by1>ay1){
        rbre = bbre;
    }else{
        rbre = -1;
    }
    printf("%d\n",rbre);
    if (bx1 <= ax2 && ax1 <= bx1 && bx2 >= ax2)
    {
        rlen = ax2-bx1;
    }else if (bx1 <= ax1 && bx2 >= ax1 && bx2<=ax2)
    {
        rlen = bx2-ax1;
    }else if(bx1<ax1 && bx2>ax2){
        rlen = alen;
    }else if(bx1>ax1 && bx2 < ax2){
        rlen = blen;
    }
    else
    {
        rlen = -1;
    }
    if (rbre >=0 && rlen >= 0)
    {
        rarea = rbre*rlen;
        result = aarea + barea - rarea;
        return result;
    }else{
        result = aarea + barea;
        return result;
    }  
}
int main(){
    int result = computeArea(-2,-2,2,2,1,-3,3,3);
    printf("%d",result);
}