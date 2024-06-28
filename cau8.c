#include <stdio.h>
#include <math.h>

int check(int n) {
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int N;
    printf("Nhap N: ");
    scanf("%d", &N);

    printf("Cac so T-prime la: ");
    for (int i = 4; i <= N; i++) {
        int a = sqrt(i);
        if (a * a == i && check(a)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}