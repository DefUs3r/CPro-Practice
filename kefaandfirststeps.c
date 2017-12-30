#include <stdio.h>
int main()
{
	int n,i=0;
	scanf("%d",&n);
	int arr[n];
	for (i=0;i<n;i++)
		scanf("%d",&arr[i]);
	int count=0,ans=0;
	for (i=0;i<n-1;i++)
	{
		if ((arr[i+1]-arr[i])>=0)
		{
			count++;
		}
		else
		{
			if (count>=ans && count!=0)
			{
				ans=count;
			}
			else
				count=0;
		}
	}
	printf("%d\n",ans);
	return 0;
}