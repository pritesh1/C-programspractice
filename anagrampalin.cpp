#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[10000];
    int n,w,count[25]={},r,output[100],i,j,counter;
    
 
	scanf("%s",&a);
    w=strlen(a);
    
    //printf("%d\n",(int)a[0]);
    
    
    for (i=0;i<=w;i++){
    	count[((int)a[i])-97]=count[((int)a[i])-97]+1;
    }
    
    counter=0;
    
	for(j=0;j<=25;j++){
		if((count[j]%2==1)){
		 	counter=counter+1;
		}
	}
	
	if(counter>1){	
			printf("NO");
	}
	else if(counter==1){
		if(w%2==0){
			printf("NO");
		}
		else{
			printf("YES");	
		}
	}
	else{
		printf("YES");
	}
	
    /*
    for(j=0;j<=25;j++){
    	printf("%d",count[j]);
    }
    */
    
    //printf("%s",a);
    return 0;
}

