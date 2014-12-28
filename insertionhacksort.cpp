#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void insertionSort(int ar_size, int *  ar) {
	int i,j;
    for(i=0;i<ar_size;i++){
		printf("%d ",ar[i]);
	}
	printf("\n");

for(i=ar_size-1;i>=0;i--){
	
	for(j=i-1;j>=0;j--){
		if (ar[i]>ar[j]){
		ar[j]=ar[j-1];
	    }
		
	}
	ar[j]=ar[i];
	
	for(j=0;j<ar_size;j++){
	printf("%d ",ar[j]);
	}
	
	
	
	
	printf("\n");
	//printf("%d ",ar[i]);
	
}
//printf("%d ",ar[ar_size-1]);
}


int main(void) {
	//Enter array size	   
	int _ar_size;
	scanf("%d", &_ar_size);
	int _ar[_ar_size], _ar_i;
	
	//scan elements of the array


for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

insertionSort(_ar_size, _ar);
   
   return 0;
}

