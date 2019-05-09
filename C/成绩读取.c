#include "stdio.h"
#include <String.h>
int main() {
	int i;
	char a[6]="admin";
	char b[6]="admin";

	printf("欢迎使用成绩查询！\n");
	printf("请输入用户名:\n","a");
	char p[6];
	char q[6];
	for(i=0; i<3; i++) {
		scanf("%s",p);
		if(strcmp(a, p) == 0) {
			printf("请输入密码:\n","b");
			scanf("%s",q);
			if(strcmp(b, q)==0) {
				printf("密码正确\n","b");
				break;
			} else {
				printf("密码不对，请再次输入\n");
				printf("请输入密码:\n","a");
			}
		} else {
			if(i==2) {
				printf("您的3次机会以用完，请下辈子再来！\n");
				return 0;
			} else {

				printf("用户名不对，请再次输入\n");
				printf("请输入用户名:\n","a");
			}
		}

	}



//输入5位同学成绩
	printf("输入5位同学成绩\n");
	int x[5];
	int n;
	for(i=0; i<5; i++) {
		scanf("%d",&x[i]);
	}
//1为查询  2为排序 3为最大值  4为最小值 5为平均分
	printf("1.查询\t");
	printf("2.排序\t");
	printf("3.最大值\t");
	printf("4.最小值\t");
	printf("5.平均分\t");
	printf("0.退出\n");
//	printf("请输入你的序号！\t");
	int temp;
	
while(true){
 printf("请输入你的序号:");
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
			printf("最大值为:%d\n",max);
			break;
		case 4:
			int min;
			min=x[0];
			for(i=1;i<5;i++){
				if(min>x[i]){
					min=x[i];
				}
			}
			printf("最小值为:%d\n",min);
			
		
			
			break;
		case 5:
			int sum,s;
			sum=0;
			for(i=0; i<5; i++) {
				sum=sum+x[i];
			}
			s=(float)sum/5;
			printf("平均分为：%d\n",s);
			break;
		case 0:
			return 0; 
	}
	
	}

	return 0;
}

