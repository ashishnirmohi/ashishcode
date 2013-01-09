#include<stdio.h>
void main(void)
{
int digit1,digit2,digit3,digit4,num,sum;
printf("Enter a number:\n");
scanf("%d",&num);
digit1=num%10;
num=num/10;
digit2=num%10;
num=num/10;
digit3=num%10;
num=num/10;
digit4=num%10;
sum=digit1+digit2+digit3+digit4;
printf("sum of the digits is:%d\n",sum);
}
