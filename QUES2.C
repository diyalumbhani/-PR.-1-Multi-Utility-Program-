//second question.
#include<stdio.h>
#include<conio.h>
void main()
{
  int bs,hra,da,ta;
  clrscr();
  printf("Enter Base salary:");
  scanf("%d",&bs);
  printf("Enter HRA: ");
  scanf("%d",&hra);
  printf("Enter DA:");
  scanf("%d",&da);
  printf("Enter TA:");
  scanf("%d",&ta);
  int gs=bs+hra+da+ta;
  printf("\n Base Salary is: %d",bs);
  printf("\n HRA is: %d",hra);
  printf("\n DA is: %d",da);
  printf("\n TA is: %d",ta);
  printf("\n Gross Salary is: %d",gs);

  getch();


}