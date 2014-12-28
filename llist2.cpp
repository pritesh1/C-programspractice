#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct list {
	int data ;
	struct list *next ;
	};
	
int main (){
	int i = 0;
	int a,c ;
	int b ;	
	printf("enter a number\n");

	struct list * tail ;
	struct list * head = (struct list*) malloc(sizeof(struct list));
    scanf("%d", &a);
	//fflush(stdin);
	scanf("%d", &b);
	//fflush(stdin);
	scanf("%d", &c);
	//fflush(stdin);
	head->data=a ;
	tail = head ;
	head = head->next ;
	head->data=b ;
	head = head->next ;
	head->data=b ;
	head = head->next ;
	head->data=b ;
	head = head->next ;
	head->data=b ;
	head = head->next ;
	head->data=c ;
	head->next = NULL;
	for (i=0;i<5;i++){
	printf("output is %d ", tail->data);
	tail= tail->next;
	}
	return tail->data;
}	
