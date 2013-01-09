#include<stdio.h>
#define MAXROW 10
#define MAXCOL 10
void main(void)
{
int a[MAXROW][MAXCOL];
int i,j,m,n;
printf("enter the size of the array as m*n \n");
scanf("%d %d",&m,&n);
if((m>MAXCOL)||(n>MAXCOL))
{
printf("Array of size more than declared\n");
exit(1);
}
printf("enter the elements of the array\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}

