#include <stdio.h>
#include <string.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	char arr[n+1];
	for (i = 0; i < n; ++i)
		scanf("%c",&arr[i]);
	int check[n];
	for (i = 0; i < ; ++i)
	{
		check[i]=0;
		if (arr[i]=="1" && arr[i+1]=="0")
			check[i]=1;
	}
	
	return 0;
}