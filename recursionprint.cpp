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
	
	if(n<=1){
		return 0;
	}
	else{
	
	
	
	char * arr;
	//char * z;
	int i,j;
	
	i=1;
	//for(i=0;i<n;i++){  
	 	 for(j=0;j<i;j++){
		 	arr[j]=a[j]	;
		 }
		 for(j=i;j<n;j++){
		 	arr[j]=a[j+1];	
		 }
		 for(j=0;j<n-1;j++){
		 	printf("%c",arr[j]);	
		 }
		 recurse(arr,n-1,init);
		 //printf("%c",a[i]);
 	//}
	
	
	//for(i=0;i<n)
	
    //recurse(arr,n-1,init);

	//printf("%c",arr[init]);


 	return 0;
 	}
  //	return 0;
}




