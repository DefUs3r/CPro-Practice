#include <stdio.h>

int main()
{
	long long n,a,b,i;
	scanf ("%lld %lld %lld",&n,&a,&b);
	long long temp1=n,temp2=n,acount1=0,acount2=0,bcount1=0,bcount2=0,flag=0;
	for (i=1; (temp1-b*i)>=0 ;i++)
	{
		if ((temp1-b*i)%a==0)
		{
			acount1=(temp1-b*i)/a;
			bcount1=i;
			flag=1;
		}
	}
	for (i=1; (temp2-a*i)>=0 ; i++ )
	{
		if ((temp2-a*i)%b==0)
		{
			bcount2=(temp2-a*i)/b;
			acount2=i;
			flag=2;
		}
	}
	if (flag==1)
	{
		printf("YES\n");
		printf("%lld %lld\n", acount1, bcount1);
	}
	else if(flag==2)
	{
		printf("YES\n");
		printf("%lld %lld\n",acount2,bcount2);
	}
	else
		printf("NO\n");
	return 0;
}