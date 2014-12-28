#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdio.h>

int main() {
    long n,m,i,j,temp;
    scanf("%ld",&n);
    long input[n],table[10000];
    
    for(i=0;i<n;i++){  
    		scanf("%ld",&input[i]);
    }
    
    table[0]=1;
    
    for(i=1;i<=10000;i++){
		//if table[i-1]>32,767 ,65535
		 
    		table[i]=((((table[i-1])%100000)*(2))%100000);
    		
    }
    
      for(i=0;i<n;i++){  
    		printf("%ld\n",table[input[i]]-1);
      }
    
    
}
