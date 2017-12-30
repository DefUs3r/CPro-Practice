#include <stdio.h>

int p1=1,p2=2,s=3,temp,i,n,flag=1;

int main()
{
	scanf("%d",&n);
	int arr[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (s!=arr[i])
		{
			if (p1==arr[i])
			{
				temp=p2;
				p2=s;
				s=temp;
			}
			else if (p2==arr[i])
			{
				temp=p1;
				p1=s;
				s=temp;
			}
			//printf("game no.=%d p1=%d p2=%d s=%d\n",i+1,p1,p2,s);
		}
		else
		{
			flag=0;
			printf("NO\n");
			return 0;
		}
	}
	if (flag==1)
	{
		printf("YES\n");
	}
	return 0;
}