#include<stdio.h>
int main()
{
	int count=0,i,n;
	scanf("%d",&n);
	int a[n];
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		if(count<a[i])
		{
			count=a[i];
		}
	}

		int sum=0;

		for (i=0;i<n;i++)

		{
			a[i]=count-a[i];
		}
		for (i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		printf("%d",sum);


return 0;
}

