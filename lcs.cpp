#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdio.h>

int max_subarray(char arr1[], int i, int index);

int max(int num1, int num2) ;
int min(int num1, int num2) ;

int main() {
	
	long n,m,i,j,temp,maximum=0,max2=0,count;
	scanf("%ld",&n);
	scanf("%ld",&m);
    long input1[n],input2[m], table[10000],output[100][100],OPT[100][100];
 	
 	
 	for(i=0;i<n;i++){  
    	scanf("%ld",&input1[i]);
    }


	for(i=0;i<m;i++){  
    	scanf("%ld",&input2[i]);
    }
 
 
 
 	if(input1[0]==input2[0]){	
    OPT[0][0]=1;
    }
    else{	
    OPT[0][0]=0;
    }
 	
 	
 	
 	
 	
 	for(i=1;i<n;i++){  
 		if(input1[i]==input2[0]){	
    	OPT[0][i]=OPT[0][i-1]+1;
    	}
    	else{	
    	OPT[0][i]=OPT[0][i-1];
    	}
    }
   
	 for(i=1;i<m;i++){  
 		if(input1[0]==input2[i]){	
    	OPT[i][0]=OPT[i-1][0]+1;
    	}
    	else{	
    	OPT[i][0]=OPT[i-1][0];
    	}
     }
     
     
     for(i=1;i<n;i++){
     	for(j=1;j<m;j++){
	 		if(input1[i]==input2[j]){	
    		OPT[i][j]=OPT[i-1][j-1]+1;
    		}
    		else{	
    		OPT[i][j]=max(OPT[i-1][j],OPT[i][j-1]);
    		} 
		 }
	 }	
	 
	 //temp= max(m,n);
	 
	 for(i=0;i<n;i++){
     	for(j=0;j<m;j++){
	 		printf("%d",OPT[i][j]) ;
		 }
		 printf("\n");
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

int min(int num1, int num2) {
   /* local variable declaration */
   int result;
 
   if (num1 < num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}
