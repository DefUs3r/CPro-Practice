#include <stdio.h>
#include <string.h>
int main()
{
	int n,i,j,flag=0;
	scanf("%d",&n);
	char name[n][101];
	for (i=0;i<n;i++)
	{
		scanf("%s",name[i]);
		for (j=0;j<i;j++)
		{
			if (strcmp(name[i],name[j])==0)
				flag=1;
			/*printf("strcmp result=%d\n",strcmp(name[i],name[j]) );
			printf("flag=%d\n", flag);*/
		}
		if (flag==1)
			printf("YES\n");
		else
			printf("NO\n");
		flag=0;
		/*printf("flag after check=%d\n", flag);*/
	}
}