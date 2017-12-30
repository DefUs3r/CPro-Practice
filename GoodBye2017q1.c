#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	char str[51];
	scanf("%s",str);
	int n=strlen(str),i=0,count=0,flag=0;
	if (n>1)
	{
		for (i=0;str[i]!='\0' && i<=n;i++)
		{
			int testnum=str[i]-'0';
			int testalpha=str[i]-'a';
			if (testnum>=0 && testnum<10 && testnum%2!=0)
			{
				count++;
			}
			else if (testalpha>=0 && testalpha<26)
			{
				if (testalpha==0 || testalpha==4 || testalpha==8 || testalpha==14 || testalpha==20)
				{
					count++;
				}
			}
		}
	}
	else if (n==1)
	{
		int testnum=str[0]-'0';
		int testalpha=str[0]-'a';
		if (testalpha>=0 && testalpha<26)
		{
			if (testalpha==0 || testalpha==4 || testalpha==8 || testalpha==14 || testalpha==20)
			{
				count=1;
			}
		}
		else if (testnum>=0 && testnum<10 && (testnum%2)!=0)
			{
				count=1;
			}
	}
	printf("%d\n",count);
	return 0;
}
