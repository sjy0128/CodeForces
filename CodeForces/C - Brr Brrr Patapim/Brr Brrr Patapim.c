#include <stdio.h>
 
int main(void) {
    int t, n, g[800][800], i, j, k, exist[1601]={0,};
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%d", &n);
        for(j=1; j<=n*2; j++) exist[j]=0;
        for(j=0; j<n; j++) {
            for(k=0; k<n; k++) {
                scanf("%d", &g[j][k]);
            }
        }
        for(j=0; j<n; j++) exist[g[0][j]]=1;
        for(j=1; j<n; j++) exist[g[j][n-1]]=1;
        for(j=1; exist[j]!=0; j++);
        printf("%d ", j);
        for(j=0; j<n-1; j++) printf("%d ", g[0][j]);
        for(j=0; j<n; j++) printf("%d ", g[n-1][j]);
        printf("\n");
    }
    return 0;
}