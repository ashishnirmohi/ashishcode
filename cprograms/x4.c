#include<stdio.h>
void main(void)
{
long totsec,min,hour,sec;
printf("Enter time in seconds:\n");
scanf("%ld",&totsec);
hour=totsec/3600;
totsec=totsec%3600;
min=totsec/60;
sec=totsec%60;
printf("%ld hour %ld minutes %ld seconds",hour,min,sec);
}

