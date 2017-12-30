#include <stdio.h>
#include <string.h>

int i=0;

int main()
{
	int flag=1;
	char name[10];
	char surname[10];
	char arr[30];
	scanf("%s",name);
	scanf("%s",surname);
	for (i=0;i<strlen(name)-1 && name[i]!='\0';i++)
	{
		arr[i]=name[i];
		if (name[i]<=surname[0] && surname[0]<=name[i+1] )
		{
			arr[i+1]=surname[0];
			arr[i+2]='\0';
			flag=0;
			break;
		}
		else if (name[i]>=surname[0] && surname[0]<=name[i+1])
		{
			arr[i+1]=surname[0];
			arr[i+2]='\0';
			flag=0;
			break;
		}
	}
	if (flag==1 && i==strlen(name)-1)
	{
		arr[i]=name[i];
		arr[i+1]=surname[0];
		arr[i+2]='\0';
	}
	printf("%s\n", arr);
	return 0;
}
