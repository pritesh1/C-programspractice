#include <stdio.h>

 
int factorial(int);
 
int main()
{
   int i, n, c, r,values[100][100],j,num,den1,den2,output[1000];
   
   	scanf("%d", &r);
	
	//Scan the array size	
  	for(j=0;j<r;j++){
  		for(i=0;i<2;i++){
  		scanf("%d", &values[j][i]);
  		}
	  }
  	
  	output[0]=1;
  	for( i= 1 ; i < 1000 ; i++ ){
  		output[i]=output[i-1]*i	;
  		
  	}
  	
  	

 	for( i= 0 ; i < r ; i++ ){
 		
		num=output[((values[i][0]+values[i][1])-1)];
		//printf("%ld ",num);
		den1=output[(values[i][0])];
		//printf("%ld ",den1);
		den2=output[(values[i][1])-1];
		//printf("%ld ",den2);
      	printf("%ld ",num/(den1*den2));
 	  	printf("\n"); 
	}
	
	
 
   return 0;
}
 
int factorial(int n)
{
   int c;
   int result = 1;
 
   for( c = 1 ; c <= n ; c++ )
         result = result*c;
 
   return ( result );
}
