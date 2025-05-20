#include <stdio.h>

int main() {
    int len=0, count=0;
    char temp;
    while(scanf(" %c ", &temp)!=EOF) {
        len++;
        if(temp == 'a') count++;
    }
    printf("%d", count > len/2 ? len : count*2-1);
    return 0;
}