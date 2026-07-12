#include <stdio.h>

int main() {
    int n, binary[32], i = 0;

    scanf("%d", &n);

    while(n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    while(i--)
        printf("%d", binary[i]);

    return 0;
}
