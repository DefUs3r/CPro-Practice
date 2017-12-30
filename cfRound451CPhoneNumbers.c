#include <stdio.h>
#include <string.h>
int main()
{
	long long n,i,j;
	scanf("%lld",&n);
	for (i=1;i<=n;i++)
	{
		char name[10];//name of person
		scanf("%s",name);
		int number;// no. of numbers
		scanf("%d",&number);
		char phone[number][10];//store phone number
		for (j=0;j<number;j++)
			scanf("%s",arr[j]);
		int lengthOfPhoneNumber[number];
		for (j=0;j<number;j++)
			lengthOfPhoneNumber[j]=strlen(phone[j]);//length of each string of phone
		
	}
	return 0;
}