#include <stdio.h>
int main()
{
	int a,b,i,ans;
	scanf("%d %d",&a,&b);
	for (i = 1; a<=b ; ++i)
	{
		a=a*3;
		b=b*2;
		ans=i;
	}
	printf("%d\n",ans);
	return 0;
}