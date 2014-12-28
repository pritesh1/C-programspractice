#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int *insertionSort(int ar_size, int *  ar) {
	
	// Function to insert the number in a list
	int i,j,* ret,temp,count;
	count=ar_size-1;

	temp=ar[ar_size-1];

	//Go in the reverse direction. 
	for(i=ar_size-2;i>=0;i--){
	if(ar[i]>temp){
		ar[i+1]=ar[i];
		count--;
		}
	}
	ar[count]=temp;
	ret=ar;
	return ret;
}




int main(void) {
	//Enter array size	   
	int _ar_size;
	scanf("%d", &_ar_size);
	int _ar[_ar_size], _ar_i, * k;
	int i,j;
	
	//scan elements of the array


for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}
//ar is my array . size is _ar_size

    for(i=2;i<_ar_size+1;i++){
		k= insertionSort(i, _ar);
		
		for(j=0;j<_ar_size;j++){
		if (j<i){
		printf("%d ",k[j]);
		}
		else{
		printf("%d ",_ar[j]);	
		}
		}
		
		printf("\n");
		
	}
   return 0;

}

