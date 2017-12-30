#include <stdio.h>

int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n],b[n];
	for (i=0;i<n;i++)
		scanf("%d %d",&a[i],&b[i]);
	int flag=0;
	for (i=0;i<n-1;i++)
	{
		if (a[i]<a[i+1])
		{
			if (b[i]>b[i+1])
				flag=1;
		}
		if (a[i]>a[i+1])
		{
			if (b[i]<b[i+1])
				flag=1;
		}
	}
	if (n<100)
	{
		for (i=0;i<n;i++)
	{
		for (j=i+1;j<n;j++){
		if (a[i]<a[j])
		{
			if (b[i]>b[j])
				flag=1;
		}
		if (a[i]>a[j])
		{
			if (b[i]<b[j])
				flag=1;
		}
	}
	}
	}
	if (flag==1)
		printf("Happy Alex\n");
	else
		printf("Poor Alex\n");
	return 0;
}