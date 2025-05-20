#include <stdio.h>
 
int main(void) {
    int n, x, y, i, temp, level[101]={0,}, pass=1;
    scanf("%d", &n);
    scanf("%d", &x);
    for(i=0; i<x; i++) {
        scanf("%d", &temp);
        level[temp] = 1;
    }
    scanf("%d", &y);
    for(i=0; i<y; i++) {
        scanf("%d", &temp);
        level[temp] = 1;
    }
    for(i=1; i<=n; i++) {
        if(level[i] != 1) {
            pass = 0;
            break;
        }
    }
    printf("%s", pass ? "I become the guy." : "Oh, my keyboard!");
    return 0;
}