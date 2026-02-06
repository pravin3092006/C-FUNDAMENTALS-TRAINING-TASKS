#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int t=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=t;j++){
            if((i+j)%2==0&&((i+j)<=(n+1))){
                printf("1");
            }else {
                printf("0");
            }
        }   
                    t-=1;

        
        printf("\n");
    }
    return 0;
}
