bool isPalindrome(int x) {
    long rev=0;
    int last,temp;
    temp=x;
	
	while(temp>0){
	    last=temp%10;
	    rev=rev*10+last;
	    temp=temp/10;
	}
	if(rev==x)
        return true;
     else
        return false;
    
	return 0;
}


    
