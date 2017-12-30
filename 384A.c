#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	if (n%2==1)
	{
		int ans=((n-1)/2)*((n-1)/2)+((n+1)/2)*((n+1)/2);
		printf("%d\n",ans);
		for (int i = 0; i < n; i++)
		{
			if (i%2==0)
			{
				for (int j = 0; j <= n && j % 2 == 0; j++)
				{
					printf("C");
				}
			}
			else
			{
				for (int j = 0; j <= n && j % 2 == 1; j++)
				{
					printf(".");
				}
			}
			printf("\n");
		}
	}

return 0;
}