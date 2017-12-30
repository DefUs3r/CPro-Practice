#include <stdio.h>
int main()
{
	long long n;
	scanf("%lld",&n);
	int lastDigit=n%10;
	if (lastDigit<=5)
	{
		n=(n/10)*10;
	}
	else if (lastDigit>5)
	{
		n=(((n/10)+1)*10);
	}
	printf("%lld\n",n);
}