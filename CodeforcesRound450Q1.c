#include <stdio.h>
void mergesort(long long arr[ ],long long l,long long r);
void combine(long long arr[ ],long long l,long long mid,long long r);

int main()
{
	long long n,i;
	scanf("%lld",&n);
	long long arrx[n],arry[n];
	long long temp=n;
	for (i = 0; i < temp; i++)
		scanf("%lld %lld",&arrx[i],&arry[i]);
	mergesort(arrx,0,n-1);
	long long countless=0,countmore=0;
	for (i = 0; i < n; ++i)
	{
		/*printf("%lld\n", arrx[i]);*/
		if (arrx[i]<0)
			countless++;
		if (arrx[i]>0)
			countmore++;
	}
	/*printf("count =%lld\n",count);*/
	
	if (countmore>1 && countless>1)
		printf("NO\n");
	else
		printf("YES\n");
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
