#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c,d,e,f,g;
    float h,i;
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
    h=a*b+c*d+e*f;
    i=h/10+h;
    printf("Total (Before Tax): %.2f",h);
    printf("\nTotal (After Tax): %.2f",i);
    if(h<=g)
        printf("\nWithin Budget");
    else
        printf("\nOver Budget");
    return 0;
}
