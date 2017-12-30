#include <stdio.h>

int main()
{
	long long a,flag=0,count=0;
	scanf("%lld",&a);
	long long temp=a;
	int arr[10]={0},i=9;
	while (temp>0)
	{
		arr[i--]=temp%10;
		temp/=10;
		/*printf("%d\n",temp);*/
	}
	/*for (i=0;i<10;i++)
		printf("%d",arr[i]);
	printf("\n");*/
	for (i=0;i<9;i++)
	{
		if (arr[i]==1)
		{
			if (arr[i+1]!=4 && arr[i+1]!=1)
			{
				flag=1;
				break;
			}
		}
		else if (arr[i]==4)
		{
			count++;
			if (count>2)
			{
				flag=1;
				break;
			}
			else if (count==1)
			{
				if (arr[i+1]!=1 && arr[i+1]!=4)
				{
					flag=1;
					break;
				}
			}
			else if (count==2)
			{
				if (arr[i+1]!=1)
				{
					flag=1;
					break;
				}
			}
		}
		else if (arr[i]==0)
			continue;
		else
		{
			flag=1;
			break;
		}

	}
	printf("%lld",flag);
	if (flag==1)
		printf("NO\n");
	else
		printf("YES\n");
	return 0;
}