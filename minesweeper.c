#include<stdio.h>
#include<stdlib.h>
int main()
{
	int prev_row,next_row,prev_col,next_col;
	int a[6][6]={0};
	int i,j,k,row,col,bomb_count;
	scanf("%d",&bomb_count);
	for(k=0;k<bomb_count;k++)
	{
		i=rand()%5;
		j=rand()%5;
		a[i][j]=-1;
	}	
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			row=i;
			col=j;
			if(a[row][col]!=-1)
			{
				if(row!=0)
				{
					prev_row=row-1;
				}
				else
				{
					prev_row=row;
				}
				if(row!=5)
				{
					next_row=row+1;
				}
				else
				{
					next_row=row;
				}
				if(col!=0)
				{
					prev_col=col-1;
				}
				else
				{
					prev_col=col;
				}
				if(col!=5)
				{
					next_col=col+1;
				}
				else
				{
					next_col=col;
				}
				for(row=prev_row;row<=next_row;row++)
				{
					for(col=prev_col;col<=next_col;col++)
					{
						if(a[row][col]==-1)
						{
							a[i][j]++;
						}
					}
				}
			}
		}
	}
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}