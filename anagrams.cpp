#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char string[10], string1[10];
    int a =0, arr[255]={}, arr1[255]={} , temp,temp1;
    printf("Enter a string\n");
    scanf("%s",string);
    a= strlen(string);
    printf("Enter a string\n");
    scanf("%s",string1);
    printf("%d",a);
    //int k= string[4];
 	//printf("%c",k+1);
 	for (int i=0;i<a;i++){
 			temp= string[i];
 			temp1= string1[i];
 			arr[temp]=arr[temp]+1;
 			arr1[temp1]=arr1[temp1]+1;
 		} 		  
 	
 	
  	for (int k=0;k<256;k++){
  		if (arr[k] != arr1[k]){
  			printf("error");
  			break;
  		}
  }
    return 0;
}
