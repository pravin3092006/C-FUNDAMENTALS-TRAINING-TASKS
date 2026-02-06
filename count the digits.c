int countDigits(int n) {
    int count=0,i;
    while(n!=0){
        n=n/10;
        count++;
        
    }
    return count;
}
