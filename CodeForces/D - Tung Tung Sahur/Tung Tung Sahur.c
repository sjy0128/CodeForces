#include <stdio.h>

int main() {
    int t, i, p_p, p_s, c_p, c_s;
    char temp, p[200001], s[200001];
    scanf("%d", &t);
    for(i=0; i<t; i++) {
        scanf("%s\n%s", p, s);
        p_p = 0;
        p_s = 0;
        while(1) {
            c_p = 0;
            c_s = 0;
            temp = p[p_p];
            while(p[p_p] != '\0' && p[p_p] == temp) {
                p_p++;
                c_p++;
            }
            while(s[p_s] != '\0' && s[p_s] == temp) {
                p_s++;
                c_s++;
            }
            if(c_s < c_p || c_s > c_p*2) {
                printf("NO\n");
                break;
            }
            if(p[p_p] == '\0') {
                if(s[p_s] != '\0') {
                    printf("NO\n");
                    break;
                }
                printf("YES\n");
                break;
            }
        }
    }
    return 0;
}