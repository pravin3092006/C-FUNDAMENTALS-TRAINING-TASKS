#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long n, temp, sum = 0;
        scanf("%lld", &n);

        temp = n;

        while (temp > 0) {
            int d = temp % 10;
            int fact = 1;

            for (int i = 1; i <= d; i++)
                fact = fact * i;

            sum = sum + fact;
            temp = temp / 10;
        }

        if (sum == n)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
