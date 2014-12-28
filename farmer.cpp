#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m,i,j;
    scanf("%d%d",&n,&m);
    int input[n][m];
    
    for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
    		scanf("%d",&input[i][j]);
    	}
    }
    
    for(i=0;i<n;i++){
    	for(j=0;j<m;j++){
    		printf("%d ",input[i][j]);
    	}
    	printf("\n");
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
