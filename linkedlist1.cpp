#include <stdio.h>
#include <math.h>
#include <stdlib.h>



struct list {
	int data ;
	struct list *next ;
	};
	
	
int main (){
	int i = 0,n,a;	
	printf("enter a number\n");

	struct list * move, * tail ;
	struct list * head = (struct list*) malloc(sizeof(struct list));

	head->data= 1;
	head->next= NULL;
	tail= head;
	printf("enter amount of numbers");
	scanf("%d",&n);
	
	
	for(i=1;i<n;i++){
	scanf("%d",&a);
	move = (struct list*) malloc(sizeof(struct list));
	move->data= a;
	tail->next=move;
	move->next= NULL;
	tail= move ;
    } 
    
	tail= head;

	for(i=0;i<n;i++){
	printf("output is %d ", tail->data);
	tail= tail->next;
	}
	return 0;
}	
