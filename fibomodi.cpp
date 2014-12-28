#include <string.h>
#include <math.h>
#include <stdlib.h>
#include<stdio.h>

int max_subarray(char arr1[], int i, int index);

int max(int num1, int num2) ;
int min(int num1, int num2) ;

int main() {
	
	long n,m,i,j,o,temp,maximum=0,max2=0,count;
	scanf("%ld",&n);
	scanf("%ld",&m);
	scanf("%ld",&o);
	long input1[n],input2[m], table[10000];
	
	
	table[0]=n;
	table[1]=m;
	
	
	for(i=2;i<o;i++){  
    	table[i]= table[i-1]*table[i-1] + table[i-2];
    	//printf("%ld",table[i]);
    }
    
    
	for(i=0;i<10;i++){ 
    printf("%ld\n",table[i-1]);
	}
	
	return 0;
}
	
	
