#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n,m,i,j,temp;
    
    int input[10000],table[10000];
    scanf("%d",&n);
    for(i=0;i<n;i++){  
    		scanf("%d",&input[i]);
    }
    
    table[0]=1;
    
    for(i=1;i<=1000;i++){  
    		table[i]=(((table[i-1]*2))%131072);
    }
    
      for(i=0;i<n;i++){  
    		printf("%d\n",(table[input[i]])-1);
    }
    
}
