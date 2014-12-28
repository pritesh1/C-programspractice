#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int n;
	int w,i,k,num,count,r,j,output[100],values[100];
	//Scan the input number
	scanf("%d", &n);
	
	scanf("%d", &r);
	
	//Scan the array size	
  	for(j=0;j<r;j++){
  		scanf("%d", &values[j]);
  	}

   qsort(values, r, sizeof(int), cmpfunc);

   //printf("\nAfter sorting the list is: \n");
   for( i = 0 ; i < r; i++) {
     if(values[i]==n){
     	printf("%d ",i);
     }
   }
  	
  return(0);
}
