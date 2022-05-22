#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,j,l,count;

	scanf("%d",&n);
	for(i=0;i<n;i++){
	    
	
	   count=0;
	   scanf("%d",&j);
	   for(int k=0;k<j;k++){
	       scanf("%d ",&l);
	       
	       if(l>=1000){
	           
	           count++;
	           
	           }
	       
	       }  
	   printf("%d\n",count);
	    
	}
	return 0;
}

