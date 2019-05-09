#include "stdio.h"
#include"string.h"
int main()
{    
printf("     +--------------------+\n");
printf("     +请输入学生账号和密码+\n");
printf("     +--------------------+\n"); 
 char a[100],b[100];
 int i,flag;  
  
   for(i=0;i<3;i++)
   {
   	scanf("%s%s",a,b); 
    flag=0;  
    if(strcmp(a,"wyj") == 0 && strcmp(b, "123456") == 0)     
	    {
		printf("欢迎进入学生系统!\n"); 
	    flag=1;
		}
		    else {
		    	if(i<2) {
				
		 printf("学生账号或密码有误，请重新输入！\n");
	
		}}
			if(i==2) {
				printf("您的3次机会以用完，请下辈子再来！\n");
				return 0;
		    } 
		    		    

		    
  }} 
   
