#include <stdio.h>

long long arrzcy[100009]={0};

long long rev(long long n);
void zcy(long long n);

int main()
{
	long long k,p,i,ans=0;
	scanf("%lld %lld",&k,&p);
	for (i=1;i<100005;i++)
		zcy(i);
	/*testing
	for (i=1;i<=k;i++)
		printf("zcy array content no. %lld is =%lld\n",i,arrzcy[i] );
	//testing*/
	for (i=1;i<=k;i++)
		ans=(ans%p+arrzcy[i]%p)%p;
	printf("%lld\n", ans);
	return 0;
}


void zcy(long long n)
{
	long long temp = n;
	if (temp < 10)
		arrzcy[n]=temp*10+rev(temp);
	else if (temp < 100 && temp >= 10)
		arrzcy[n]=temp*100+rev(temp);
	else if (temp < 1000 && temp >= 100)
		arrzcy[n]=temp*1000+rev(temp);
	else if (temp < 10000 && temp >= 1000)
		arrzcy[n]=temp*10000+rev(temp);
	else if (temp <100000 && temp >= 10000)
		arrzcy[n]=temp*100000+rev(temp);
	else if (temp < 1000000 && temp >= 100000)
		arrzcy[n]=temp*1000000+rev(temp);
}

long long rev(long long n)
{
	long long temp1=n,rev=0,rem;
	while (temp1!=0)
	{
		rem=temp1%10;
		rev=rev*10+rem;
		temp1/=10;
	}
	return rev;
}