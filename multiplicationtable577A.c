#include <stdio.h>
int main()
{
	long long n,x,i,count=0;
	scanf("%lld %lld",&n,&x);
	for (i = 1; i <= n; ++i)
		if(x%i==0)
			count++;
	if (x>n)
		count--;
	printf("%lld\n",count );
	return 0;
}