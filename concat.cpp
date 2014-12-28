#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

char *op(char * str, int a );

int main() {
    char str[10], temp;
    char *str1;
    int a =0;
    printf("Enter a str\n");
    scanf("%s",str);
    a= strlen(str);
    printf("%d",a);
    printf("%s\n",str);
   
 	str1 = op(str,a);
 	for (int i=0;i<a;i++){
 	printf("%c",str1[i]);
 	}
 	printf("\n%s",str1);
    return 0;
}

char *op(char * str, int a  ){
	for (int i=a;i<2*a;i++){
 	str[i]= str[i-a];
 	}
	str[2*a]='\0';
 	for (int i=0;i<=a;i++){
 	printf("%c",str[i]);
 	}
	return str;
}
