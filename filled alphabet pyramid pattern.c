#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++)
            printf("  ");

        for(int j = 0; j < 2*i - 1; j++)
            printf("%c ", 'A' + j);

        printf("\n");
    
}
   
    return 0;
}
