#include<stdio.h>
void mergesort(long long arr[ ],long long l,long long r);
void combine(long long arr[ ],long long l,long long mid,long long r);
int main()
{
	long long int i,n,k;
	scanf("%lld %lld",&n,&k);
	long long int len[n-k+1],temp[n-k+1],arr[n],ans=1;
	for (i = 0; i < n; i++)
	{
		scanf("%lld",&arr[i]);

	}
	for (i=0;i<n-k+1;i++)
		len[i]=0;
	for (i = 0; i < k; i++)//O(k)
	{
		len[0]+=arr[i];
	}
	for (i=1;i<=n-k;i++)//O(n-k)
	{
		len[i]=len[i-1]-arr[i-1]+arr[i+k-1];
	}
	for (i=0;i<=n-k;i++)
		temp[i]=len[i];
	//now to find minimum of len (O(nlogn) by mergesort)
	mergesort(len,0,n-k);
	//total complexity=O(k)+O(n-k)+O(nlogn)
	/*for (i=0;i<=n-k;i++)
		printf("len=%lld ",len[i] );
	printf("%lld\n",len[0]);*/
	i=0;
	while (temp[i]!=len[0])
	{
		i++;
		ans=i+1;
		
	}
	printf("%lld\n",ans);
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
