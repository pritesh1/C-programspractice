#include <stdio.h>
#include <math.h>
 
int fibonacci(int a);

int main()
{
  int a[],n;
  printf("Enter size : \n");
  scanf("%d", &n);
  
  printf("Enter an integer\n");
  for (i=0,i<n,i++){
  scanf("%d", &a);
  }
  int k= 0;  
  k= fibonacci(a);
  printf("Integer that you have entered is %d\n", k);
  return 0;
}
