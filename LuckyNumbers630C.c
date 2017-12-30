#include <stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	long long arr[55]={0};
	long long ans=0;
	arr[0]=2;
	for (i=1;i<n;i++)
	{
		arr[i]=2*arr[i-1];
	}
	for (i=0;i<n;i++)
		ans+=arr[i];
	printf("%lld\n",ans);
	return 0;
}