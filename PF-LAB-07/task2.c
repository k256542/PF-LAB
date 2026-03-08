#include <stdio.h>

int main() {
    int a[10], i, num, count = 0;

    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    scanf("%d", &num);

    for(i = 0; i < 10; i++)
        if(a[i] == num)
            count++;

    if(count > 0)
        printf("%d", count);
    else
        printf("number not found");

    return 0;
}