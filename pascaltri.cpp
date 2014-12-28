#include <stdio.h>
 
long factorial(int);
 
int main()
{
   int i, n, c, r,values[10000],j;
   
   	scanf("%d", &r);
	
	//Scan the array size	
  	for(j=0;j<r;j++){
  		scanf("%d", &values[j]);
  	}

 	for( i= 0 ; i < r ; i++ ){
 	
      for( c = 0 ; c <= values[i] ; c++ )
      printf("%ld ",factorial(values[i])/(factorial(c)*factorial(values[i]-c)));
 	  printf("\n");
	}
 
   return 0;
}
 
long factorial(int n)
{
   long c;
   long result = 1;
 
   for( c = 1 ; c <= n ; c++ )
         result = result*c;
 
   return ( result );
}
