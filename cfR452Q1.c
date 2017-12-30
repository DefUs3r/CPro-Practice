#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],smallMonth=0,bigMonth=0,flag=0,count=0,leap=0,print=0;
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&arr[i]);
		
	}
	for (int i = 0; i < n; ++i)
	{
		if (flag==0 && arr[i]==31 && i<n-1)
		{
			if ((arr[i+1]==30 || arr[i+1]==28) && leap==0 )
			{
				flag=1;
				leap=1;
				print=1;
			}
			else if ((arr[i+1]==30 || arr[i+1]==29) && leap==1 )
			{
				flag=1;
				leap=0;
				print=1;
			}
			else
			{
				print=0;
				break;
			}
		}
		else if ((arr[i]==30 || arr[i]==28 || arr[i]==29) && flag==1 && i<n-1)
		{
			flag==0;
			print=1;
		}
		else if (arr[i]==31 && arr[i+1]==31 && arr[i+2]==28 && n<12 && i<10)
		{
			print=1;	
		}
		else if (arr[i]==31 && arr[i+1]==31 && arr[i+2]==30 && n<12 && i<10)
		{
			print=1;	
		}
		else if (arr[i]==31 && arr[i+1]==31 && arr[i+2]==28 && arr[i+12]==31 && arr[i+13]==31 && arr[i+14]==28 && n>12 && i<9)
			print=1;
		else if (arr[i]==31 && arr[i+1]==31 && arr[i+2]==30 && arr[i+12]==31 && arr[i+13]==31 && arr[i+14]==30 && n>12 && i<9)
			print=1;
		else
		{
			print=0;
			break;
		}
	}
	if (print==1)
		printf("YES\n");
	else
		printf("NO\n");
}