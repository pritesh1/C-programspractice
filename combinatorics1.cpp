#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
	int w,i,k,num,count,r,j,output[100][100],values[100],temp;
	//Scan the input number
	
	
	scanf("%d", &r); 


	for(j=0;j<r;j++){
  		scanf("%d", &values[j]);
		for(i=0;i<values[j]-1;i++){
  		scanf("%d", &output[i][j]);
	  }
 	 }
  		
  		
   	for(j=0;j<r;j++){
   		temp=output[0][j];
   		//printf("temp=%d\n",temp);
   		
		for(i=1;i<values[j]-1;i++){   
		   temp=temp*output[i][j];
		}
		printf("%d\n",temp%1234567);
	}
	
	

   	
   	
  	
   
    return 0;
}
