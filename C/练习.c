/*#include <stdio.h>
int main(){
	float a=0,n;
	scanf("%f",&a);
	printf("%6.2f\n",a); //1
	printf("%6.2f %6.2f\n",a,a);
	printf("%6.2f %6.2f %6.2f\n",a,a,a);
	return 0;
}*/
/*
#include <stdio.h>
int fun(int x) {
	int p;
	if(x==0||x==1)  return (3);
	p=x-fun(x-2);
	printf("%d\t",p);
	return(p);
}
int main() {
	printf("%d\n",fun(9));
	return 0;
}*/

/*
#include <stdio.h>
int main(){
	int a,n,count=1;
	long int sn=0,tn=0;
	scanf("%d%d",&a,&n);
	while(count<=n){
		tn=tn+a;
		sn=sn+tn;
		a=a*10;
		++count;
	}
	printf("%ld\n",sn);
	return 0;
} */
/*

#include <stdio.h>
#include <math.h>
int main() {
	int a,b,c;
	float sum=0,i;
	scanf("%d%d%d",&a,&b,&c);
	for(i=1; i<=a; i++) {
		sum=sum+i;
	}
	for(i=1; i<=b; i++) {
		sum=sum+pow(i,2);
	}
	for(i=1; i<=c; i++) {
		sum=sum+1/i;
	}
	printf("%.2f",sum);
	return 0;
}*/
#include <stdio.h>
int main(){
	int a;
	printf("%d",4/10);
}
