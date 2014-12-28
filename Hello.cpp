# include <stdio.h>
# include <math.h>

int main(){
	int a ;
	int i =0;
	
	char b[10] ;
	printf("Hello world\n");
	for (i=0;i<10;i++){
		scanf ("%c",&b[i]);
		fflush(stdin);
	}
	for (i=0;i<10;i++){
		printf("lo ji : %c\n", b[i]);
	}
	
	return 0
	 ;
}
