#include<stdio.h>

int i,j,k;

int main() {
	int a[10][10],b[10][10],c[10][10],m,n,p,q;
  	void mul(int x[10][10],int y[10][10],int z[10][10],int m,int n,int p,int q);
  	void read(int x[10][10],int m,int n);
  	void display(int x[10][10], int m,int n);
  	printf("Enter the size of A Mtrix (Row and Col): \n");
  	scanf("%d %d",&m,&n);
  	printf("Enter the size of B Mtrix (Row and Col): \n");
  	scanf("%d %d",&p,&q);
  	if(n!=p) {
      		printf("Multiplication Not Possible\n Please re-enter\n");
      		printf("correct size and try again .....\n");
 	 }
  	else	{
     		read(a,m,n);
     		read(b,p,q);
     	        printf("Matrix after multipliucation is \n");
        	mul(a,b,c,m,n,p,q);
                }
  	return 0;
}

void mul(int x[10][10],int y[10][10],int z[10][10],int m,int n,int p,int q) {
    for (i=0;i<m;i++) 
       for(j=0;j<q;j++)  
       {      
      	 z[i][j]=0;
         for(k=0;k<n;k++)  
         	z[i][j]+= x[i][k]*y[k][j];
       }
          for(i=0;i<m;i++) 
          {
          for(j=0;j<q;j++)
          { 
            printf("%d\t",z[i][j]); 
          }
            printf("\n");
           }      
}
  
 
void read(int x[10][10], int m,int n) {
    printf("Enter Matrix Value Row by Row\n");
    for (i=0;i<m;i++)
       for(j=0;j<n;j++)
       scanf("%d",&x[i][j]);
}
 

