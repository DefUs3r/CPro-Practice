#include <stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	char color[n+1];
	scanf("%s",color);
	for (i=0;i<n;i++)
	{
		if (color[i]=='R')
			arr[i]=1;
		if (color[i]=='G')
			arr[i]=2;
		if (color[i]=='B')
			arr[i]=3;
	}
	int count=0;
	for (i=0;i<n-1;i++)
	{
		if (arr[i]==arr[i+1])
			count++;
	}
	printf("%d\n", count);
	return 0;
}