#include "stdio.h"
int main() {
	int a[100],i,n,max,min;
	float avg;
	printf("��������Ҫ�жϵĸ�����");
	scanf("%d",&n);
	printf("��������ĸ�����");
	for(i=0; i<n; i++) {
		scanf("%d",&a[i]);
	}
	int asd;
	scanf("%d",&asd) ;
	switch(asd) {

		case 1:

			for(i=0; i<n; i++) {
				max=a[0];
				if(max<a[i])
					max=a[i];
			}
			printf("max=%d\t",max);
		case 2:

			for(i=0; i<n; i++) {
				min=a[0];
				if(min>a[i])
					min=a[i];
			}
			printf("min=%d\t",min);
	
	     case 3:
	     	for(i=0; i<n; i++) {
			avg=avg+a[i];
			}
			avg=avg/i;
			printf("ƽ��ֵΪ%.2f",avg);
	     	
	}
	
	return 0;
}

