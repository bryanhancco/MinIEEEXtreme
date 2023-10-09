#include <stdio.h>
int main() {
    int t; scanf("%d", &t);
    while(t--) {
        float k, p, s; scanf("%f %f %f", &k, &p, &s);
        float result = 100*s/(k*(100+p));
        printf("%d\n", (int) result);
    }
    return 0;
}