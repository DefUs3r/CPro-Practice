#include <stdio.h>
long long absolut(long long n);
void mergesort(long long arr[ ],long long l,long long r);
void combine(long long arr[ ],long long l,long long mid,long long r);
int main()
{
	long long t;
	scanf("%lld",&t);
	while (t>0)
	{
		long long n;
		scanf("%lld",&n);
		long long arr[n],i;
		for (i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
			/*printf("Yes/scanned\n");*/
		}
		mergesort (arr,0,n-1);
		long long time=0;
		/*printf("Yes\n")*/;
		for (i=0;i<n-1;i++)
		{
			long long c=arr[i+1]-arr[i];
			time=time+absolut(c);
		}
		printf("%lld\n", time);
		t--;
	}
	return 0;
}
long long absolut(long long n)
{
	if (n<0)
	{
		long long h=(-1)*n;
		return h;
	}
	else
		return n;
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
