#include <stdio.h>
#include <string.h>
#define big 1000005

int main()
{
	char arr[big];
	scanf("%s",arr);
	long long len=strlen(arr);
	int lastDigit=arr[len-1]-'0';
	int secondLastDigit=arr[len-2]-'0';
	int divByFour;
	if (len>1)
	{
		divByFour=lastDigit+(secondLastDigit*10);
		
	}
	else if (len==1)
	{
		divByFour=lastDigit;
	}
	if (divByFour%4==0)
		printf("4\n");
	else
		printf("0\n");
	return 0;	
}