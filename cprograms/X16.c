#include<conio.h>
#include<stdio.h>
#define MAX 100
void main(void)
{
int i,n,a[MAX],pass=0,temp,status_flag;
clrscr();
printf("enter the size of the array\n");
scanf("%d",&n);
if(n>MAX)
{
printf("input array of size more than declared\n");
exit(1);
}
printf("enter the %d elements of array\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("wait\n");
while((pass<n-1)&&(status_flag))
{
status_flag=0;
for(i=0;i<n-pass-1;i++)
{
if(a[i]>a[i+1])
{
status_flag=1;
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
}
pass++;
}
printf(" Array elements after sorting are\n" );
for(i=0;i<n;i++)
printf("%d  ",a[i]);

getch();
}