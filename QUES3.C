//third question.
#include<stdio.h>
#include<conio.h>
void main()
{
  int fa,sa;
   clrscr();
   printf("Enter first angle:");
   scanf("%d",&fa);
   printf("Enter second angle:");
   scanf("%d",&sa);
   int ta=180-(fa+sa);
   printf("\n First angle is: %d",fa);
   printf("\n Second angle is: %d",sa);
   printf("\n Third angle is: %d",ta);
   getch();




}