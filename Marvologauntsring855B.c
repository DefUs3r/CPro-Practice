#include <stdio.h>
void mergesort(long long arr[ ],long long l,long long r);
void combine(long long arr[ ],long long l,long long mid,long long r);
int main()
{
	long long n,i;
	scanf("%lld",&n);
	long long arr[n];
	long long inp[3];
	for (i=0;i<3;i++)
		scanf("%lld",&inp[i]);
	for (i=0;i<n;i++)
		scanf("%lld",&arr[i]);
	mergesort (inp,0,2);
	mergesort (arr,0,n-1);
	long long x=(inp[2]*arr[n-1])+(inp[1]*arr[n-2])+(inp[0]*arr[n-3]);
	printf("%lld\n", x);
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
