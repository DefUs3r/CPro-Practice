#include<stdio.h>
int main()
{
	int i,a[1000],n,trackmax=0,trackmin=0,awesome=0;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//for finding maxima
	for (i=1;i<n;i++)
	{
		if (a[i]>a[trackmax])
		{
			trackmax=i;
			awesome++;
		}
	}
	//for finding minima
	i=1;
	for (i=1;i<n;i++)
	{
		if (a[i]<a[trackmin])
		{
			trackmin=i;
			awesome++;
		}
		
	}
	printf("%d",awesome);
	return 0;
}



