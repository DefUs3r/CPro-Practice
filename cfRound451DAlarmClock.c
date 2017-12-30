#include <stdio.h>
void mergesort(long long arr[ ],long long l,long long r);
void combine(long long arr[ ],long long l,long long mid,long long r);
int main()
{
	long long i,n,m,k,flag=0,j=0;
	scanf("%lld %lld %lld",&n,&m,&k);
	long long alarm[n];
	for (i=0;i<n;i++)
		scanf("%lld",&alarm[i]);
	mergesort(alarm,0,n-1);
	long long switchoff[n],counter,timediff[n-1],timeelapse=0;
	for (i = 0; i < n; i++)
	{
		switchoff[i]=0;
	}
	for (i=0;i<n-1;i++)
		timediff[i]=arr[i+1]-arr[i];
	for (i=0;i<n-1;i++)
	{	
		timeelapse=arr[i+1];
		if (timeelapse<=m && counter<k)
		{
			switchoff[i+1]=1;
			counter++;
		}
	}
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
