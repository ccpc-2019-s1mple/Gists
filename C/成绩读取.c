#include "stdio.h"
#include <String.h>
int main() {
	int i;
	char a[6]="admin";
	char b[6]="admin";

	printf("��ӭʹ�óɼ���ѯ��\n");
	printf("�������û���:\n","a");
	char p[6];
	char q[6];
	for(i=0; i<3; i++) {
		scanf("%s",p);
		if(strcmp(a, p) == 0) {
			printf("����������:\n","b");
			scanf("%s",q);
			if(strcmp(b, q)==0) {
				printf("������ȷ\n","b");
				break;
			} else {
				printf("���벻�ԣ����ٴ�����\n");
				printf("����������:\n","a");
			}
		} else {
			if(i==2) {
				printf("����3�λ��������꣬���±���������\n");
				return 0;
			} else {

				printf("�û������ԣ����ٴ�����\n");
				printf("�������û���:\n","a");
			}
		}

	}



//����5λͬѧ�ɼ�
	printf("����5λͬѧ�ɼ�\n");
	int x[5];
	int n;
	for(i=0; i<5; i++) {
		scanf("%d",&x[i]);
	}
//1Ϊ��ѯ  2Ϊ���� 3Ϊ���ֵ  4Ϊ��Сֵ 5Ϊƽ����
	printf("1.��ѯ\t");
	printf("2.����\t");
	printf("3.���ֵ\t");
	printf("4.��Сֵ\t");
	printf("5.ƽ����\t");
	printf("0.�˳�\n");
//	printf("�����������ţ�\t");
	int temp;
	
while(true){
 printf("������������:");
  scanf("%d",&temp);
	switch(temp) {

		case 1:
			for(i=0; i<5; i++) {
				printf("%d\t",x[i]);
			}
			 printf("\n");
			break;
		case 2:
			int w,j;
			for(i=0; i<5; i++) {
				for(j=1; j<=5; j++) {
					if(x[i]<x[j]) {
						w=x[i];
						x[i]=x[j];
						x[j]=w;
					}
				}
			}
			for(i=0; i<5; i++) {
				printf("%d\t",x[i]);
			}
			 printf("\n");
			break;

		case 3:
	int max;
			max=x[0];
			for(i=1;i<5;i++){
				if(max<x[i]){
					max=x[i];
				}
			}
			printf("���ֵΪ:%d\n",max);
			break;
		case 4:
			int min;
			min=x[0];
			for(i=1;i<5;i++){
				if(min>x[i]){
					min=x[i];
				}
			}
			printf("��СֵΪ:%d\n",min);
			
		
			
			break;
		case 5:
			int sum,s;
			sum=0;
			for(i=0; i<5; i++) {
				sum=sum+x[i];
			}
			s=(float)sum/5;
			printf("ƽ����Ϊ��%d\n",s);
			break;
		case 0:
			return 0; 
	}
	
	}

	return 0;
}

