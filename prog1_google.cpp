#include <stdio.h>
#include <math.h>
 
int out (int a );

int main()
{
  int a;
   
  printf("Enter an integer\n");
  scanf("%d", &a);
  int k= 0;  
  k= out(a);
  printf("Integer that you have entered is %d\n", k);
  return 0;
  
  
}

int out (int a ){	
return a+a;	
}
