#include <stdio.h>
int i,flag=0;
int main()
{
	char arr[500002];
	scanf("%s",arr);
	for (i = 0; i < 500002 && arr[i]!='\0'; i++)
	{
		if(arr[i]=='H' || arr[i]=='Q' || arr[i]=='9')
			flag=1;
	}
	if (flag==1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}