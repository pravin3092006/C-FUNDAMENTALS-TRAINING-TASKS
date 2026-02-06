#include <stdio.h>
int main() {
    int a,b,s,d,p,q,r;
    scanf("%d%d",&a,&b);
    s=a+b;
    d=a-b;
    p=a*b;
    q=a/b;
    r=a%b;
    printf("Sum: %d",s);
    printf("\nDifference: %d",d);
    printf("\nProduct: %d",p);
    printf("\nQuotient: %d",q);
    printf("\nRemainder: %d",r);       
    return 0;
}
