#include <stdio.h>
long long n,i,count=0;
int main()
{
	scanf("%lld",&n);
	long long arr[n],extrema[n];
	for (i = 0; i < n; i++)
	{
		scanf("%lld",&arr[i]);
		extrema[i]=0;
	}
	for (i=1;i<n-1;i++)
	{
		if (arr[i]>arr[i-1] && arr[i]>arr[i+1])
			extrema[i]=1;
		else if (arr[i]<arr[i-1] && arr[i]<arr[i+1])
			extrema[i]=1;
	}
	for (i = 0; i < n; i++)
		count+=extrema[i];
	printf("%lld\n", count);
	return 0;
}