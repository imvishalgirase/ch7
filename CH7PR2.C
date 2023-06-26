#include<stdio.h>
#include<conio.h>
void main()
{
    int y;
    clrscr();
    printf("Please enter the value of y=");
    scanf("%d",&y);
    if(y>0)
    {
      printf("The enterd value is positive");
      }


      else if(y<0)
      {
	printf("The entered value is negative");
	}
	else
	{
	 printf("The enterd value is not in our consideration");
	 }
	 getch();
	 }