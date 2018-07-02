#include <stdio.h>
#include <stdlib.h>

int f(int n) {
    if((n == 0) || (n == 1)) {
        return n;
    }
    else {
        return f(n-1) + f(n-2);
    }
}

int main() {
    int q;
    printf("Quantity: ");
    scanf("%d", &q);

    printf("\n");

    for (int i = 0; i < q; i++) {
        printf("%d\n", f(i));
    }

    printf("\n");

    system("PAUSE");
    return 0;
}