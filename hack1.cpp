#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,w,i,k,num,count;
    printf("Enter n\n");
    scanf("%d", &n);
    //w= strlen(n);
    fflush(stdin);
    printf("w= %d",w);
    num=n;
    count=0;
   	printf("n= %d\n",n);
    for(i=1;i<10;i++){
    k=n%10;
    n=(n-k)/10;
    printf("n= %d\n",k);
    if(k!=0){
		if((num%k == 0)&&(k!=0)){
    		count=count+1;
    	}
	}
    }
    
    printf("count= %d",count);
    return count;
}

