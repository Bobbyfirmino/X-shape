#include<stdio.h>
void main()
{
	int i,j,n;
	printf("Enter any no. ");
	scanf("%d",&n);
	if(n%2==1)
	{
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j||i+j==n+1)
			{
				printf("%d",n);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	}
	else
	{
		puts("Input odd no. only");
	}
}