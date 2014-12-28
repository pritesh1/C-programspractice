#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m,i,j,temp;
    scanf("%d",&n);
    int input[n],table[10000];
    
    for(i=0;i<n;i++){  
    		scanf("%d",&input[i]);
    }
    
    table[0]=1;
    
    for(i=1;i<=16;i++){  
    		table[i]=((table[i-1]%100000)*(2)%100000);
    }
    
      for(i=0;i<n;i++){  
    		printf("%d",table[i]-1);
    }
    
    
}
