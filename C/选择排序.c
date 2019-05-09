//从小到大排序
#include <stdio.h>
void swap(int A[],int i,int j) {
	int temp=A[i];
	A[i]=A[j];
	A[j]=temp;
}
void SelectionSort(int A[],int n) {
	for(int i=0; i<n-1; i++) {
		int min=i;
		for(int j=i+1; j<n; j++) {
			if(A[j]<A[min]) {
				min=j;
			}
		}
		if(min!=i) {
			swap(A,min,i);
		}
	}
}
int main() {
	int A[100],n=10;
	for(int i=0; i<10; i++) {
		scanf("%d",&A[i]);
	}

//	int n=sizeof(A)/sizeof(int);
	SelectionSort(A,n);
//	printf("选择排序结果：\n");
	for(int i=0; i<n; i++) {
		printf("%d\n",A[i]);
	}

	return 0;
}
