#include "stdio.h"
int main(){
	long long i,j,A,B,t=0,c;
	scanf("%lld %lld",&A,&B);
	 if(A<B){
	 	t=A;
	 	A=B;
	 	B=t;
	 }
	 c=A%B;
	 while(c!=0){
	 	A=B;
	 	B=c;
	 	c=A%B;
	 }
	 printf("%lld",B);
	
	return 0;
}
