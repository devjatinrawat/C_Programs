#include<math.h>
#include<stdio.h>  /*Standard input output header file*/
#include<conio.h>  /*console input output header file*/
main()
{
int n;
float m;
clrscr();
printf("\nEnter the number whose square root is required=");
scanf("%d",&n);
m=sqrt(n);
printf("\nSquare root of %d=%f",n,m);
getch();
}


