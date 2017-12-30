#include <stdio.h>

int main()
{
	int arr[100000]={0};
	int h1,a1,c1,i,moves;
	scanf("%d %d %d",&h1,&a1,&c1);
	int h2,a2;
	scanf("%d %d",&h2,&a2);
	for (i=1;h2>0;i++)
	{
		moves=i;
		if ((h2-a1)<=0)
		{
			h2=h2-a1;
			/*printf("LOGIC-3\n");*/
			arr[i]=1;
			if (h2<=0)
			{
				break;
			}
			h1=h1-a2;
			
		}
		if ((h1-a2)>0)
		{
			/*printf("LOGIC-1\n");*/
			arr[i]=1;
			h1=h1-a2;
			h2=h2-a1;
		}
		else
		{
			/*printf("LOGIC-2\n");*/
			arr[i]=2;
			h1=h1+c1-a2;
		}
		
		/*printf("Stats of round %d =\n", i);
		printf("Modcrab => health= %d\n", h2);
		printf("Vova => health=%d\n",h1);*/
	}
	i=1;
	printf("%d\n",moves);
	while(arr[i]!=0)
	{
		if (arr[i]==1)
			printf("STRIKE\n");
		else if (arr[i]==2)
			printf("HEAL\n");
		i++;
	}
	return 0;
}