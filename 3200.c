#include <stdio.h>
int maxHeightOfTriangle(int red, int blue) {
    int height = 0;
    int currentLevel = 1;
    
    while (red >= 0 && blue >= 0) {
        if (height % 2 == 0) {
            if (red >= currentLevel) {
                red -= currentLevel;
                height++;
            } else {
                break;
            }
        } else {
            if (blue >= currentLevel) {
                blue -= currentLevel;
                height++;
            } else {
                break;
            }
        }
        currentLevel++;
    }

    return height;
}

int main(){
    int result = maxHeightOfTriangle(2,4);
    printf("%d",result);
}