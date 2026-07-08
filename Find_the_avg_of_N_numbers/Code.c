#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);
        sum += x;
    }

    printf("Average = %.2f", sum / n);

    return 0;
}
