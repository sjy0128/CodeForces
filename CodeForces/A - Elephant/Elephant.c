#include <stdio.h>
int main(void) {
    int x;
    scanf("%d", &x);
    printf("%d", x%5==0 ? x/5 : x/5+1);
    return 0;
}