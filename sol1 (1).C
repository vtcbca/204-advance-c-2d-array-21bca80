#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,m1[3][3],m2[3][3],sum[3][3];
	clrscr();
	//logic to create first matrix
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter element for m1[%d][%d]: ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	//logic to create second matrix.
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter element for m2[%d][%d]: ",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	clrscr();
	//logic to print first matrix.
	printf("\nMatrix 1\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	//logic to print second matrix.
	printf("\nMatrix 2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m2[i][j]);
		}
		printf("\n");
	}
	//logic to print sum of first matrix and second matrix.
	printf("\nSum of two matrix.\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=m1[i][j]+m2[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	getch();
}
