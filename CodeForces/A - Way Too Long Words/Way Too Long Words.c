#include <stdio.h>
 
int main(void) {
    int n, i, j;
    char word[101];
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%s", word);
        for(j=0; word[j]!='\0'; j++);
        if(j > 10) printf("%c%d%c\n", word[0], j-2, word[j-1]);
        else printf("%s\n", word);
    }
    return 0;
}