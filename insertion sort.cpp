#include<stdio.h>

main(){
int a[100],i,j,temp,n;
printf("enter number\n");
scanf("%d",&n);
printf("enter array ");

 for(i=0;i<n;i++){
 scanf("%d",&a[i]);
 }

 for(i=1;i<n;i++){
 temp=a[i];
 j=i-1;
  while((temp<a[j])&&(i>0)){
  a[j+1]=a[j];
 // a[j]=temp; if this is used delete line 21 and put i>= 
  j=j-1;
 }
 a[j+1]=temp;
 }

for(i=0;i<n;i++){
printf("%d ",a[i]);
 }
}
