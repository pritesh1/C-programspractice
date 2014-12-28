#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int w,i,k,num,count,r,j,output[100],n[100];
    //printf("Enter the number of numbers\n");
    output[0]=0;
	for (j=1;j<=60;j++){
		output[j]=output[j-1]+1;
		j=j+1;
		output[j]=2*(output[j-1]);
	}
	
	//for (j=0;j<=5;j++){
	//	printf("%d\n",output[j]);
	//}

	scanf("%d", &r);
    
  	for(j=1;j<=r;j++){
  		scanf("%d", &n[j]);
  		fflush(stdin);
  	}
  	
  	for(j=1;j<=r;j++){
  		printf("%d\n", output[n[j]+1]);
  		
  	}
    return 0;
}

