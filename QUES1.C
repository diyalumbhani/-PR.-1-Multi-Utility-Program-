//first question.
#include<stdio.h>
#include<conio.h>
void main()
{
  int C;
  clrscr();
  printf("Enter C:");
  scanf("%d",&C);
  float F=(1.8*C)+32;
  printf("\n Temperature in Celsius is: %d",C);
  printf("\n Temperature in Fahrenheit is: %.1f",F);
  getch();

}