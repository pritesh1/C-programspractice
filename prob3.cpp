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
    //printf("%c\n",str[a]);
    //int k= str[4];
 	//printf("%c",k+1);
 	
 	str1 = op(str,a);
 	for (int i=0;i<=a;i++){
 	printf("%c",str1[i]);
 	}
 	printf("%s",str1);
    return 0;
}


char *op(char * str, int a ){
	int temp;
	for (int i=0;i<=a/2;i++){
 	 	temp = str[a-i];
 		str[a-i]=str[i];
 		str[i] = temp;
 	}
 	for (int i=0;i<=a;i++){
 	printf("%c",str[i]);
 	}
	return str;
}
