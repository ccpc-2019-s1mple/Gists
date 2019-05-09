//从大到小排序 
#include <stdio.h>
int main() {
	int j,i,temp;
	int a[5]={33,55,66,88,22};
	/*for(i=0; i<5; i++) {
		scanf("%d",&a[i]);
	}*/
	for(j=0; j<5-1; j++) {
		for(i=0; i<5-j; i++) {
			if(a[i]<a[i+1]) {
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	for(i=0; i<5; i++) {
		printf("%d\t",a[i]);
	}
	return 0;
}
