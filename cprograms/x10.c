	#include<stdio.h>
	#define MAXROW 20
	#define MAXCOL 20
	void main(void)  
	{
	int a[MAXROW][MAXCOL],b[MAXROW][MAXCOL],c[MAXROW][MAXCOL];
	int m,n,p,q,i,j,k;
	printf("Matrix Multiplication\n");
	printf("Enter the size of Matrix A as m*n \n");
	scanf("%d %d",&m,&n);
	if((m>MAXROW)||(n>MAXCOL))
	{
	printf("Matrix of size more than declared\n");
	exit(1);
	}
	printf("enter the size of Matrix B as p*q\n");
	scanf("%d %d",&p,&q);
	if((p>MAXROW)||(q>MAXCOL))
	{
	printf("Matrix of size more than declared\n");
	exit(1);
		}

	if((n!=p))
	{
	printf("Matrix productr is not possible\n");
		}

	printf("enter matrix A:\n");
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	{
	scanf("%d",&a[i][j]);
		}
	printf("Enter matrix b:\n");
	for(i=0;i<p;i++)
	for(j=0;j<q;j++)
	{
	scanf("%d",&b[i][j]);
		}
	printf("Matrix product is:\n");
	for(i=0;i<m;i++)
	for(j=0;j<q;j++)
	{
	c[i][j]=0;
	for(k=0;k<n;k++)
	{
	c[i][j]+=a[i][k]*b[k][j];
		}
			}
	for(i=0;i<m;i++)
	{
	for(j=0;j<q;j++)
	{
	printf("%d\t",c[i][j]);
	}	
	printf("\n");
		}
	}
