#include <stdio.h>
#define big 100000
int main()
{
	long long n;
	scanf("%lld",&n);
	int min=9999,index=0/*,max=-1*/;
	int arr[big],i=0,flag=0;
	for (i=0;i<big;i++)
		arr[i]=-1;
	for (i = big-1; i >=0 && n>0 ; i--)
	{
		arr[i]=n%10;
		n/=10;
	}
	for (i=big-1;i>=0;i--)
	{
		if (arr[i]%2==0 && arr[i]<=min /*&& i>max*/)
		{
			min=arr[i];
			index=i;
			flag=1;
			/*i=max;*/
		}
	}
	int temp;
	temp=arr[big-1];
	arr[big-1]=arr[index];
	arr[index]=temp;
	/*for (i=0;i<6;i++)
		printf("%d", arr[i]);
	printf("\n");*/
	if (flag==1)
	{
		for (i=0;i<big;i++)
		{
			if (arr[i]!=-1)
			{
				printf("%d",arr[i]);
			}
			else
				continue;
		}
	}
	else
		printf("-1");
	printf("\n");
	return 0;
}