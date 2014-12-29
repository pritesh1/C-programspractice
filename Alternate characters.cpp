# This is a program for solving the alternate characters challenge on hackerrank


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[10000];
    int n,w,count,r,output[100],i,j;
    
	scanf("%d", &r);
    
  	for(j=1;j<=r;j++){
	
	scanf("%s",&a);
    
    w=strlen(a);
    count=0;
    for (i=1;i<=w;i++){
    	if(a[i]==a[i-1]){
    	count=count+1;
		}
		output[j]= count;
    	
    }
    }
    for(j=1;j<=r;j++){
    	printf("%d\n",output[j]);
    }
    //printf("%s",a);
    return 0;
}

