#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/*long long power(int a, int b)
{
	int temper=1;
	for (int i = 1; i <= b; i++)
	{
		temper*=a;
	}
	return temper;
}
*/
int main()
{
	char inp[101];
	int num,j=0,dig,mod=1000003,n;
	long long sum=0,twospower=1;
	scanf("%s",inp);
	n=strlen(inp);
	for (int i = n-1; i >= 0; i--)
	{
		if (inp[i]=='>')
			num=1000;
		else if (inp[i]=='<')
			num=1001;
		else if (inp[i]=='+')
			num=1010;
		else if (inp[i]=='-')
			num=1011;
		else if (inp[i]=='.')
			num=1100;
		else if (inp[i]==',')
			num=1101;
		else if (inp[i]=='[')
			num=1110;
		else if (inp[i]==']')
			num=1111;
		int temp=num;
		while(temp!=0)
		{
			dig=temp%10;
			sum=(sum + (dig*twospower))%mod;
			temp/=10;
			//j++;
			twospower=((twospower%mod)*(2%mod))%mod;
			/*printf("%lld\n",twospower);*/
		}
	}
	printf("%lld\n",sum );
	return 0;
}