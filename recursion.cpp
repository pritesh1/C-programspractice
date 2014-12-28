#include <stdio.h>
#include <math.h>
 
int fibonacci(int a);

int main()
{
  int a;
  printf("Enter an integer\n");
  scanf("%d", &a);
  int k= 0;  
  k= fibonacci(a);
  printf("Integer that you have entered is %d\n", k);
  return 0;
}

int fibonacci (int a ){	
if (a<1){
return 1;
}
else{
return (fibonacci(a-1)+ fibonacci(a-2));	
}
}
