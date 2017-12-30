#include <stdio.h>
#define big 100005
long long arr[big]={0};
int main()
{
	long long n,i;
	scanf("%lld",&n);
	long long k=0;
	for (i=0;n>0;i++)
	{
		if ((n%10)==0 && n<100)
		{
			n-=10;
			arr[i]=10;
		}
		if ((n%100)==0 && n<1000)
		{
			n-=100;
			arr[i]=100;
		}
		if ((n%1000)==0 && n<10000)
		{
			n-=1000;
			arr[i]=1000;
		}
		if ((n%10000)==0 && n<100000)
		{
			n-=10000;
			arr[i]=10000;
		}
		if ((n%100000)==0 && n<1000000)
		{
			n-=100000;
			arr[i]=100000;
		}
		if (n>=10 && n<11)
		{
			n-=10;
			arr[i]=10;
		}
		if (n>=100 && n<110)
		{
			n-=100;
			arr[i]=100;
		}
		if (n>=1000 && n<1100)
		{
			n-=1000;
			arr[i]=1000;
		}
		if (n>=10000 && n<11000)
		{
			n-=10000;
			arr[i]=10000;
		}
		if (n>=100000 && n<110000)
		{
			n-=100000;
			arr[i]=100000;
		}
		if (n>=1000000)
		{
			n-=1000000;
			arr[i]=1000000;
		}
		if (n<10)
		{
			n-=1;
			arr[i]=1;
		}
		if (n<100 && n>10)
		{
			n-=11;
			arr[i]=11;
		}
		if (n<1000 && n>110)
		{
			n-=111;
			arr[i]=111;
		}
		if (n<10000 && n>1100)
		{
			n-=1111;
			arr[i]=1111;
		}
		if (n<100000 && n>11000)
		{
			n-=11111;
			arr[i]=11111;
		}
		if (n<1000000 && n>110000)
		{
			n-=111111;
			arr[i]=111111;
		}
		k++;
		printf("n after change %lld\n", n);
	}
	printf("%lld\n", k);
	i=0;
	while (arr[i]!=0)
	{
		printf("%lld ",arr[i]);
		i++;
	}
	printf("\n");
	return 0;
}