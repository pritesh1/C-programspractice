#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int n,l,start,end,temp,total;
	int w,i,k,num,count,r,j,input[100000];
	
	
		scanf("%d", &n); 
		scanf("%d", &r); 
	int output[10000000]={};
	
	for(j=0;j<n;j++){
	printf("%d",output[j]);
	}
	printf("\n");	
	
	for(j=0;j<r;j++){
	scanf("%d%d%d",&start,&end,&input[j]);
	temp=input[j];
	
		for(k=start-1;k<end;k++){
		output[k]=output[k]+temp;
	}
	
	}
	
	total=0;
	for(j=0;j<n;j++){
		total=total+output[j];
	}
	
	printf("%d",total/n);
	
	
}
