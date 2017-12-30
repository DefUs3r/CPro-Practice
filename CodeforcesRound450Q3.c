#include <stdio.h>
int main()
{
	long long n,i;
	scanf("%lld",&n);
	long long arr[n];
	int check[n];
	for (i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
		check[i]=0;
	}
	for (i = 0; i < n-1; i++)
	{
		if (arr[i]>=arr[i+1])
			check[i]=1;
	}
	for (i = 0; i < n; ++i)
	{
		printf("arr[%lld] == %lld ", i,arr[i]);
	}
	printf("\n");
	for (i = 0; i < n; ++i)
	{
		printf("check[%lld] == %d ", i,check[i]);
	}
	printf("\n");
	return 0;
}