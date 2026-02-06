
int fib(int n) {
   int i,a=0,b=1,c;
   if(n==0)
    return 0;
   else if(n==1)
    return 1;
   else {
    for(i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
   } 
   return b;
   }
   return 0;
} 

