#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[1000000];
    int n,w,count,r,output[10000],i,j,temp,l;
    
	scanf("%d", &r);
    
  	for(j=1;j<=r;j++){
	
		scanf("%s",&a);
    
    	w=strlen(a);
    	count=0;
    	l=w-1;
    	temp=0;
    	for (i=0;i<l;i++){	
   	 		if(a[i]-a[l]<0){
   	 			temp=a[l]-a[i];
   	 		}
			else{
				temp=a[i]-a[l];
			}
			count=count+temp;
			l--;
    	}
    	output[j]=count;
		//printf("%d\n",count);
    }
    
    for(j=1;j<=r;j++){
    	printf("%d\n",output[j]);
    }

    return 0;
}

