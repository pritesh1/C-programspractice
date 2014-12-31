# this is the program to solve the hackerrank challenge coinage

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m,i,j,k,l,count,o,output;
    scanf("%d",&n);
    int input[n][4],sum[n];
    
    
    
    
    for(i=0;i<n;i++){
    	scanf("%d",&sum[i]);
    	for(j=0;j<4;j++){
    		scanf("%d",&input[i][j]);
    	}
    }
    
    
    
    
    for(o=0;o<n;o++){
    	count=0;
    	for(i=0;i<=input[o][0];i++){
    		for(k=0;k<=input[o][1];k++){
    			for(l=0;l<=input[o][2];l++){
    				for(m=0;m<=input[o][3];m++){
    					
						output = i+2*k+5*l+10*m;
    					
    					//printf("i,j,k,l=%d%d%d%d\n",i,k,l,m);
    					if(output==sum[o]){
    						count=count+1;
    					}
    				}
    			}
    		}
    	}
    	printf("%d\n",count);
    
	}
    
    /*
    for(i=0;i<n;i++){
    	for(j=0;j<4;j++){
    		printf("%d ",input[i][j]);
    	}
    	printf("\n");
    }
    */
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
