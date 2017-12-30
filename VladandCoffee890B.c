#include <stdio.h>
long long n,count[200005],min=99999999999999999,i,ans;
int main()
{
	scanf("%lld",&n);
	long long arr[n];
	for (i = 0; i < 200005; i++)
	{
		count[i]=99999999999;
	}
	for (i=0;i<n;i++)
	{
		scanf("%lld",&arr[i]);
		count[arr[i]]=i;
	}
	for (i = 0; i < 200005; i++)
	{
		if (count[i]<min)
		{
			min=count[i];
			ans=i;
		}
	}
	printf("%lld\n", ans);
	return 0;
}