#include <stdio.h>

int main() {
    int x, n, i, power = 1;

    scanf("%d %d", &x, &n);

    for(i = 1; i <= n; i++)
        power *= x;

    printf("%d", power);
    return 0;
}
