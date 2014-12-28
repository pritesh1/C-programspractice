#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
	int w,i,k,num,count,r,j,values[1000],temp;
	int output[100][100]={};
	
  	for(i=0;i<10;i++){
		output[0][i]=1;
	}
  	
  	
	for(i=1;i<5;i++){ 
	for(j=1;j<=i;j++){
	output[i][j]=output[i-1][j-1]+output[i-1][j];
	}
	}	
	
	for(j=0;j<=5;j++){
		printf("%d \n",output[j]);
	}
	printf("\n");

	
    return 0;
}
