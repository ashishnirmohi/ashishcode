#include<conio.h>
#include<stdio.h>
#define MAX 100
void main(void)
{
int a[MAX],n,i,item;
printf("enter size of the array\n");
scanf("%d",&n);
if(n>MAX)
{
printf("Input array is of larger size than of array defined\n");
exit(1);
}
printf("enter the %d elements of the array\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Enter element to search for position\n");
scanf("%d",&item);
for(i=0;i<n;i++)
{
if(a[i]==item)
printf("%d element is present at %d position \n ",item,i);
}
getch();
}