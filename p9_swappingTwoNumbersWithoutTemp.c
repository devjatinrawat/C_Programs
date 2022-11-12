#include<stdio.h>  /*Standard input output header file*/
#include<conio.h>  /*console input output header file*/
/*Program to swap two numbers*/
main()
{
int a,b,c;
clrscr();
printf("\nEnter value of a:=");
scanf("%d",&a);//3
printf("\nEnter value of b:=");
scanf("%d",&b);   //6
a=a+b;//9
b=a-b;//3
a=a-b;  //6
printf("a=%d",a);
printf("\nb=%d",b);
getch();
}

