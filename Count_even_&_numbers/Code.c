#include <stdio.h>

int main() {
    int n, even = 0, odd = 0, num;

    scanf("%d", &n);

    while(n--) {
        scanf("%d", &num);

        if(num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);

    return 0;
}
