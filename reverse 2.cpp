#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[10], temp;
    int a =0;
    printf("Enter a str\n");
    scanf("%s",str);
    a= strlen(str);
    printf("%d",a);
    printf("%s\n",str);
    //printf("%c\n",str[a]);
    //int k= str[4];
 	//printf("%c",k+1);
 	for (int i=0;i<=a;i++){
 	 	temp = str[a-i-1];
 		str[a-i-1]=str[i];
 		str[i] = temp;
 	}
 	
 	for (int i=0;i<=a%2;i++){
 	printf("%c",str[i]);
 	}
 	printf("%s",str);
    return 0;
}
