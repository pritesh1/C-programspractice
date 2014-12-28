#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main()
{
    int n;
	int w,i,k,num,count,r,j,values[100000],temp;
	//Scan the input number
	scanf("%d", &r);
	
	//Scan the array size	
  	for(j=0;j<r;j++){
  		scanf("%d", &values[j]);
  	}


   qsort(values, r, sizeof(int), cmpfunc);
  

   //printf("\nAfter sorting the list is: \n");
   count=1;
   temp=values[1];
   for( i = 0 ; i < r; i++ ) {
      if(values[i]>temp+4){
      count=count+1;
	  temp=values[i];
  	   }
      
   }
  printf("%d",count);
  return(0);
}
