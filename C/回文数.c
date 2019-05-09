#include <stdio.h>
#include <string.h>

int main() {
	int i = 0;
	int length = 0;
	char number[100] = {'\0'};
	
	scanf("%s", number);
	length = strlen(number);
	//printf("%d\n%s\n", length, number);
	
	for (i = 0; i < length / 2; i++) {
		if (number[i] != number[length - i - 1]) {
			printf("No");
			return 0;
		}
	}
	printf("Yes");
	return 0;
}
