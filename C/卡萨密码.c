#include "stdio.h"
#include "strings.h"
int main() {
	char str1[10000];
	char key;
	int b;
	int i,length;
	gets(str1);
	scanf("%d",&key);
	length=strlen(str1);
	for(b=0; b<length; b++) {
		if(str1[b]>=120&&str1[b]<=122) {
			str1[b]=str1[b]-26;
		}
		if(str1[b]>=88&&str1[b]<=90) {
			str1[b]=str1[b]-26;
		}
		str1[b]=str1[b]+key;
	}
	puts(str1);
	return 0;
}
