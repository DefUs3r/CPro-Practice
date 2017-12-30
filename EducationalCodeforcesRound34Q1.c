#include <stdio.h>

int main()
{
	int n,i=1;
	scanf("%d",&n);
	while (n>0)
	{
		int x;
		scanf("%d",&x);
		int temp=x,temp1=x,temp2=x;
		int flag1=0,flag2=0;
		while((temp-3*i)>=0)
		{
			temp1=(temp-(3*i))%7;
			/*printf("b=%d\n",temp1 );*/
			if (temp1==0)
			{
				flag1=1;
				break;
			}
			i++;
		}
		i=1;
		while ((temp-7*i)>=0)
		{
			temp2=(temp-(7*i))%3;
			/*printf("a=%d\n",temp2 );*/
			if (temp2==0)
			{
				flag2=1;
				break;
			}
			i++;
		}
		if (flag1==1 || flag2==1)
			printf("YES\n");
		else
			printf("NO\n");
		n--;
	}
	return 0;
}