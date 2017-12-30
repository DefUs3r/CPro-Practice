#include <stdio.h>
int i;

int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	char inp[n+1];
	while (m>0)
	{
		int l,r;
		char c1,c2;
		scanf("%d %d %c %c",&l,&r,&c1,&c2);
		for(i=l;i<=r;i++)
		{
			if (inp[i]==c1)
				inp[i]=c2;
		}
		m--;
	}
	printf("%s\n",inp);
	return 0;
}