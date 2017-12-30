#include <stdio.h>
int num[1000005]={0},i=0;
long long int sum=0;
int main()
{
	for (i = 11; i < 1000000; ++i)
	{
		int count=0;
		int temp=i;
		int rev=0,rem;
		while (temp!=0)
		{
			rem=temp%10;
			rev=rev*10+rem;
			temp/=10;
			count++;
		}
		if (rev==i && count%2==0)
		{
			num[i]=1;
			printf("zcy number=%d\n",i);
		}
	}
	long long int k,p,count1=0;
	scanf("%lld %lld",&k,&p);
	for (i = 1; i <= 1000000 && count1<k; i++)
	{
		if (num[i]==1)
		{
			sum=(sum+i)%p;
			printf("no. of no.s %lld\n",count1);
			count1++;
		}
	}
	printf("%lld\n",sum);
}