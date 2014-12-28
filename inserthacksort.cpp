#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int *insertionSort(int ar_size, int *  ar) {
	int i,j,* ret,temp,count;
	count=ar_size-1;

	temp=ar[ar_size-1];

	
	for(i=ar_size-2;i>=0;i--){
	if(ar[i]>temp){
		ar[i+1]=ar[i];
		
		for(j=0;j<ar_size;j++){
		printf("%d ",ar[j]);
		
		}
		printf("\n");
		count--;
		
		}
		
	
	
	}
	ar[count]=temp;
	for(j=0;j<ar_size;j++){
		printf("%d ",ar[j]);
	}
	
	ret=ar;
	return ret;
}
//printf("%d ",ar[ar_size-1]);



int main(void) {
	//Enter array size	   
	int _ar_size;
	scanf("%d", &_ar_size);
	int _ar[_ar_size], _ar_i, * k;
	int i;
	
	//scan elements of the array


for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

k= insertionSort(_ar_size, _ar);

 /*   
   for(i=0;i<_ar_size;i++){
		printf("%d ",k[i]);
	}
*/
   return 0;

}

