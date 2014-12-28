#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char * recurse(char a[], int n, int init);

int main() {
    char a[10000], *z;
    int n,w,count[25]={},r,output[100],i,j,counter;
    
 
	scanf("%s",&a);
	
	 w=strlen(a);
	 recurse(a,w,0);

//	printf("%s",z);
  
    return 0;
    
}

char * recurse(char a[], int n, int init){
	
	if(init==n){
		return 0;
	}
	
	
	char * arr;
	//char * z;
	int i;
	
	
	arr=a;
	//for(i=init;i<n;i++){  
	//		printf("%c",arr[i]);
    //}
    //printf("%c",arr[init]);
    recurse(arr,n,init+1);
//	printf("%c",arr[init]);
	printf("%c",arr[init]);
//	printf("\n");
    
    //recurse(arr,n,init+1);
 	return 0;
  //	return 0;
}


