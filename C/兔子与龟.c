#include "stdio.h"
int main()
{
	int v,a,t,s,z,i,b,n,m;
	n=m=0;
	scanf("%d",&v);
	scanf("%d",&a);
	scanf("%d",&t);
	scanf("%d",&s);
	scanf("%d",&z);
    n=z%v;
	m=z%a;
	i=z%a+s;
	b=z%v;
	if(i>b)
	{
		printf("R%d\n");
		printf("%d\n",i);
	}
	if(b>i)
	{
		printf("T%d");
		printf("%d\n",b);
	}
	if(i=b)
	{
		printf("D%d");
		printf("%d\n",b);
	}
	
	
	return 0;
}
