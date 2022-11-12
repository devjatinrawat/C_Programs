#include<stdio.h>  /*Standard input output header file*/
#include<conio.h>  /*console input output header file*/
/*Program to swap two numbers*/
main()
{
int a,b,c;
clrscr();
printf("\nEnter value of a:=");
scanf("%d",&a);	//10
printf("\nEnter value of b:=");
scanf("%d",&b); //3
c=a;	//c=10
a=b;    //a=3
b=c;   //b= 10
printf("a=%d",a);
printf("\nb=%d",b);
getch();
}

