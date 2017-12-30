#include <stdio.h>
#include <stdlib.h>
long long x,y,i,ans;

int main()
{
	scanf("%lld %lld",&x,&y);
	ans=abs(x)+abs(y);
	if (x>0 && y>0)
		printf("0 %lld %lld 0\n",ans,ans );
	else if (x<0 && y>0)
		printf("-%lld 0 0 %lld\n",ans,ans );
	else if (x<0 && y<0)
		printf("-%lld 0 0 -%lld\n",ans,ans );
	else if (x>0 && y<0)
		printf("0 -%lld %lld 0\n",ans,ans );
	return 0;
}