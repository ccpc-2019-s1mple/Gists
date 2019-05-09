#include "stdio.h"
int main(){
	double a,sum,i;
	scanf("%d",&a);
	sum=1;
	for(i=1;i<=a;i++)
	{
		sum=sum*i;	
	 } 
	printf("%d",sum);
	return 0;
} 
