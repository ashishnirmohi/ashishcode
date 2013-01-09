#include<stdio.h>
void main(void)
{
int ncr,n,r;
int fact(int k);
printf("Enter the value of n:\n");
scanf("%d",&n);
printf("Enter value of r:\n");
scanf("%d",&r);
ncr=fact(n)/fact(r)*fact(n-r);
printf("value of ncr:%d",ncr);
}
int fact(int k)
{
int product=1,i;
for(i=2;i<=k;i++)
product*=i;
return product;
}
