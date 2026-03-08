#include <stdio.h>

int main() {
    int pass[10], fail[10];
    int i = 0, p = 0, f = 0, m;
    int sumP = 0, sumF = 0;

    while(i < 10) {
        scanf("%d", &m);
        if(m == -1) break;

        if(m >= 5 && m <= 10) {
            pass[p] = m;
            sumP += m;
            p++;
        }
        else if(m >= 0 && m < 5) {
            fail[f] = m;
            sumF += m;
            f++;
        }
        i++;
    }

    for(i = 0; i < p; i++)
        printf("%d ", pass[i]);

    if(p > 0)
        printf("\n%.2f\n", (float)sumP/p);

    for(i = 0; i < f; i++)
        printf("%d ", fail[i]);

    if(f > 0)
        printf("\n%.2f", (float)sumF/f);

    return 0;
}