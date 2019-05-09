#include <algorithm>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
using namespace std;
int gcd(int a,int b) {
	if(b == 0) return a;
	return gcd(b,a%b);
}
int arr[110],n;
const int N = 10010;
bool bk[N];
int main()
{
	scanf("%d",&n);
	for(int i = 0 ; i < n ; i ++)
		scanf("%d",&arr[i]);
	int g = arr[0];
	for(int i = 1 ; i < n ; i ++)
		g = gcd(g,arr[i]);
	if(g != 1)
	{
		printf("INF\n");
	} else {
		bk[0] = true;
		for(int i = 0 ; i < n ; i ++)
		{
			for(int j = 0 ; j + arr[i] < N ; j ++)
				if(bk[j])bk[j+arr[i]]= true;
		}
		int count = 0;
		for(int i = N-1 ; i >= 0 ; i --) {
			if(bk[i] == false) count++;
		}
		printf("%d\n",count);
}
	return 0;
}
