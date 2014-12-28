#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,l;
	int w,i,k,num,count,r,j,values[1000],temp;
	int output[200][200]={};
	
	scanf("%d", &r); 


	for(j=0;j<r;j++){
  		scanf("%d", &values[j]);
	  }
 	 
	
	
  	for(i=0;i<200;i++){
		output[0][i]=1;
	}
  	
  	
	for(i=1;i<200;i++){ 
	for(j=1;j<=i;j++){
	output[i][j]=output[i-1][j-1]+output[i-1][j];
	}
	}	
	
	
	/*
	for(i=1;i<5;i++){ 
	for(j=1;j<=i;j++){
		printf("%d ",output[i][j]/2);
	}
	printf("\n");
	}
	*/
	
	for(l=0;l<r;l++){
	for(j=1;j<=values[l]+1;j++){
		printf("%d ",output[values[l]+1][j]/2);
	}
	printf("\n");
	}
	
	
	
    return 0;
}
