#include <stdio.h>
#include <math.h>


struct list{
	int a ;
	int b ;
};


int main(){
	struct list list1 ;
	struct list *c ;
	list1.a = 1 ;
	list1.b = 2 ;
	c= &list1 ;
	printf("a:  %d\n", c->a ) ;
	printf("b:  %d\n", c->b ) ;
	return 0;
}
