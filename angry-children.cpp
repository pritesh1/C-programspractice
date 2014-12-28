#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,w,i,k,num,count,r,j,output,a,b,arr[100000],temp;
    //printf("Enter the number of numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    
  	for(j=1;j<=a;j++){
    scanf("%d", &n);
    arr[j]=n ;  	
	}
	
	temp=0;
	
    for(j=1;j<=b+1;j++){
    	for(i=j+1;i<=a;i++){
			if (arr[i]< arr[j])
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	
	for(j=1;j<=b+1;j++){
  	printf("%d\n",arr[j]);
	}
	
	return 0;
}
