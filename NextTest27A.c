#include <stdio.h>

int main()
{
	int n,i,ans=0;
	scanf("%d",&n);
	int arr[3002]={0};
	while (n>0)
	{
		int num;
		scanf("%d",&num);
		arr[num]++;
		n--;
	}
	for (i=1;i<=3001;i++)
	{
		if (arr[i]==0)
		{
			ans=i;
			break;
		}
	}
	printf("%d\n", ans);
	return 0;
}