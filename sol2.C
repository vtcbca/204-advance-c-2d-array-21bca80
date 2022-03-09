#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,m[3][3],check=0;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter the value of m[%d][%d]: ",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	clrscr();
	printf("Matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",m[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<=3;j++)
		{
			if(i!=j && m[i][j]!=0)
			{
				printf("\n value of check is increased by 1.");
				check=1;
				break;
			}
		}
	}
	printf("\n\n");
	if(check==1)
	{
		printf("\n It is not a diagonal matrix.");
	}
	else
	{
		printf("\n It is a digonal matrix.");
	}
	getch();
}
