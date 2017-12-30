#include <stdio.h>
int main()
{
	int n,m,i,j,cache;
	scanf("%d %d",&n,&m);
	int temp=n,flag=0;
	int coordinates[101]={0};
	j=0;int a[101],b[101];
	while (temp>0)
	{
		scanf("%d %d",&a[j],&b[j]);
		if (temp==n)
			cache=b[j];
		for (i=0;i<j;i++)
		{
			if (a[j]==a[i] && b[j]==b[i])
			{
				continue;
			}
			else
			{
				for (i=a[j];i<=b[j];i++)
				{
					coordinates[i]++;
				}
			}
		}
		temp--;j++;
	}
	for (i=cache;i<m+1;i++)
	{
		if ((coordinates[i]==1 && coordinates[i+1]==1)|| coordinates[i]==0)
		{
			flag=1;
			break;
		}
	}
//	for (i=0;i<m;i++)
//		printf("%d ",coordinates[i]);
	if (flag==1)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}
