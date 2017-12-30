#include <stdio.h>
void mergesort(long long arr[ ],long long l,long long r);
void combine(long long arr[ ],long long l,long long mid,long long r);
int main()
{
	long long k;
	scanf("%lld",&k);
	long long arr[12],i;
	long long sum=0,count=0;
	for (i=0;i<12;i++)
	{
		scanf("%lld",&arr[i]);
	}
	mergesort(arr,0,11);
	for (i = 11; i >= 0 ; i-- )
	{
		if (sum<k){
			sum+=arr[i];
			count++;
		}
	}
	if (count<=12 && sum>=k){
	printf("%lld\n", count);}
	else if (sum<k && count==12){
		printf("-1\n");
	}
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
