#include "stdio.h"
int main(){
	int a,i,j;
	for(i=1;i<=9;i++){
		for(j=1;j<=i;j++){
			a=i*j;
			printf("%d*%d=%d\t",i,j,a);
			
			if(i==j)
			{
				printf("\n");
		    } 
		}
	}
	
	
	return 0;
} 
