#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num,a,max=0,min=9;
    scanf("%d",&num);
    while(num!=0){
        a=num%10;
        if(a<min){
            min=a;
        }
        if(a>max){
            max=a;
        }
        num=num/10;
    }
        printf("%d %d",max,min);
        return 0;
       
    }
