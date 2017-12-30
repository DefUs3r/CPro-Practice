#include<stdio.h>
int main()
{
	char a[0]; int i,count=0;
	scanf("%s",&a[0]);
	for(i=0;i<93;i++)
	{
		for (j=1;j<=100-i;j++)
		{
			if(a[i]==a[i+1]==a[i+2]==a[i+3]==a[i+4]==a[i+5]==a[i+6])
		{
		 	count=1;
		}
		else
		{
			count=0;
		}
		}
	}
	if(count==1)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}

	return 0;
}
