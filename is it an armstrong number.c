#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {


    int num, temp, digit, count = 0;
    int sum = 0;

    scanf("%d", &num);
    temp = num;

    while (temp != 0) {
        count++;
        temp = temp / 10;
    }

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }

    if (sum == num)
        printf("true");
    else
        printf("false");

    return 0;
}
