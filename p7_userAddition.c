#include<stdio.h>  /*Standard input output header file*/
#include<conio.h>  /*console input output header file*/
main()
{
int a,b,c;
clrscr();
printf("\nEnter value of a:=");
scanf("%d",&a); /*& is called ampersand sign*/
printf("\nEnter value of b:=");
scanf("%d",&b);
c=a+b;
printf("a=%d",a);
printf("\nb=%d",b);
printf("\nc=%d",c);
getch();
}
