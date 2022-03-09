#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,m1[3][3],m2[3][3],mul[3][3];
	// variable i and j are loop control variable.
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
	//logic to print multiplication of first matrix and second matrix.
	printf("\nMultiplication of two matrix.\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=m1[i][j]*m2[i][j]+m1[i][j]*m2[i+1][j]+m1[i][j]*m2[i+2][j];
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	getch();
}