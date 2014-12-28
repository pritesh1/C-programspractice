#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct list {
	int data ;
	struct list *next ;
	};
	
int main (){
	int a,b,i = 0 ;	
	printf("enter a string of numbers \n") ;
	struct list * tail ;
	struct list * head = (struct list*) malloc(sizeof(struct list)) ;
	head->data = 1 ;
	tail = head ;
	
	for (i=0;i<10;i++){
	scanf("%d", &a);
	//fflush(stdin);
	head = head->next ;
	head->data=a ;
	}
	
	head->next = NULL;
	printf("output is %d \n", tail->data) ;
	printf("output is %d \n", tail->next->data) ;
	printf("output is %d \n", tail->next->next->data) ;
	printf("output is %d \n", tail->next->next->next->next->data) ;
	return 0;
}	



