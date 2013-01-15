#include<stdio.h>
#include<conio.h>
main()
{
FILE *fptr;
char ch;
if((fptr = fopen("file1.dat","w"))== NULL){
printf("unable to open the file\n");
}
printf("type a line of text , when finished hit enter\n ");
while((ch=getche()) !="\r")
fputc(ch,fptr);
fclose(fptr);
}