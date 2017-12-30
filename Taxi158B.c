#include <stdio.h>

void mergesort(long long arr[ ],long long l,long long r);
void combine(long long arr[ ],long long l,long long mid,long long r);

long long n,i=0,sum=0,count=0;
int main()
{
	scanf("%lld",&n);
	long long arr[n];
	for (i = 0; i < n; ++i)
	{
		scanf("%lld",&arr[i]);
	}
	mergesort(arr,0,n-1);
	for (i = 0; i < n; ++i)
	{
		printf("sorted %lld ",arr[i]);
	}
	printf("\n");
	for ( i = 0; i < n-1; i++)
	{
		sum=sum+arr[i];
		if (sum+arr[i+1]>4)
		{
			count++;
			sum=0;
		}
		else if (sum+arr[i+1]==4)
		{
			count++;
			sum=0;
			i++;
		}
		if (i==n-2 && sum==0)
		{
			count++;
		}
	}
	printf("%lld\n",count );
	return 0;
}

void mergesort(long long arr[ ], long long l, long long r)
{
	if (l<r)
	{
		long long mid= l + ( ( r - l )  / 2 );
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);
		combine(arr,l,mid,r);
	}
	else
	{
		return;
	}
}
void combine(long long arr[ ],long long l,long long mid, long long r)
{
	long long i=l,j=mid+1,k=l;
	long long left[mid-l+1],right[r-mid];
	for(i=l;i<=mid;i++)
	{
		left[i-l]=arr[i];
	}
	for (i=mid+1; i<=r; i++)
	{
		right[i-mid-1]=arr[i];
	}
	i=0,j=0;
	while (i<(mid-l+1) && j<(r-mid))
	{
		if (left[i]>=right[j])
		{
			arr[k++]=right[j++];
		}
		else
		{
			arr[k++]=left[i++];
		}
	}
	while (i<(mid-l+1))
	{
		arr[k++]=left[i++];
	}
	while (j<(r-mid))
	{
		arr[k++]=right[j++];
	}
}