#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int a,b,c;
     scanf("%d%d%d",&a,&b,&c);
     if(a>b&&a>c)
         printf("%d is the greatest",a);
    else if(b>a&&b>c)
        printf("%d is the greatest",b);
    else if(a==b||b==c||c==a)
        printf("There is a tie for the greatest number");
    else
        printf("%d is the greatest ",c);
  
       
    return 0;
}

