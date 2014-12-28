#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char string[10];
    int a =0, arr[255]={},temp;
    printf("Enter a string\n");
    scanf("%s",string);
    a= strlen(string);
    printf("%d",a);
    //int k= string[4];
 	//printf("%c",k+1);
 	for (int i=0;i<a;i++){
 		temp= string[i];
 		if (arr[temp] !=0){
 			printf("Repeat alert");
 			break;
 		}
 		else{
 			arr[temp]=arr[temp]+1;
 		} 		  
 	}
 	
    return 0;
}
