#include <stdio.h>
 
int main(void) {
    int t, n, note[500], i, j, k;
    char row[5];
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        for(j=0; j<n; j++) {
            scanf("%s", row);
            for(k=0; k<4; k++) {
                if(row[k] == '#') note[j] = k+1;
            }
        }
        for(j=n-1; j>=0; j--) {
            printf("%d ", note[j]);
        }
        printf("\n");
    }
    return 0;
}