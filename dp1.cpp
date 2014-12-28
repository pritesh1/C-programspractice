#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdio.h>

int max_subarray(char arr1[], int i, int index);

int max(int num1, int num2) ;

int main() {
long n,m,i,j,temp,maximum=0,max2=0,count;
	scanf("%ld",&n);
    long input[n],table[10000],output[100][100],dp[100][100];
    
    for(i=0;i<n;i++){  
    	scanf("%ld",&input[i]);
    		for(j=0;j<input[i];j++){  
    		scanf("%ld",&output[i][j]);	
    		}
    }
    
    
    for(m=0;m<n;m++){
	//LCS HERE
	dp[m][0]=0;
    
    for(j=1;j<input[m]+1;j++){  
    dp[m][j]=max((dp[m][j-1])+output[m][j-1],output[m][j-1]);	
    }
    
    maximum=output[m][0];
   
    for(j=1;j<input[m]+1;j++){  
		if (dp[m][j]>=maximum){
		maximum=dp[m][j];
		}
	}
	
	//Maximum non contiguous subarray
	max2=0;
	
	
	for(j=0;j<input[m];j++){  
		if (output[m][j]>=0){
		max2=max2+output[m][j];	
		}
	}
	
	count=output[m][0];
	if(max2==0){
		for(j=0;j<input[m];j++){  
		if (output[m][j]<count){
		count=	output[m][j];
		}
	}
	max2=count;
		
	}
	
	printf("%ld %ld\n",maximum,max2);
	}
	

}

int max(int num1, int num2) {
   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}


