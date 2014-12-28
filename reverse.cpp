#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char string[10],string2[10]={};
    int a =0,temp;
    printf("Enter a string\n");
    scanf("%s",string);
    a= strlen(string);
    printf("%d",a);
    printf("%s",string);
    //int k= string[4];
 	//printf("%c",k+1);
 	for (int i=0;i<=a;i++){
 		string2[a-i]=string[i];
 	}
 	string2[a]='\0';
 	for (int i=0;i<a;i++){
 	printf("%c",string2[i]);
 	}
 	printf("%s",string2);
    return 0;
}
