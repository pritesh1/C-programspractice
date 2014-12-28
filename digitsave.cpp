#include<stdio.h>
int main(){
  int num,temp,factor=1,i;
  

  printf("Enter a number: ");
  scanf("%d",&num);
  int arr[num];

  temp=num;
  while(temp){
      temp=temp/10;
      factor = factor*10;
  }

  printf("Each digits of given number are: ");
  i=0;
  while(factor>1){
  	  i++;	
      factor = factor/10;
      //printf("%d ",num/factor);
      arr[i]=num/factor;
      num = num % factor;
  }

printf("arr[1]=%d",arr[2]);
  return 0;
}
