#include<stdio.h>

void main()
{
  int i,j, k;

  clrscr();

  for(i = 0; i < 24; i++)
  {
     for(j = 24; j >= i; j--)
     {
	printf(" ");
     }
     for(k = 0; k <= i; k++)
       printf("*");
     printf("\n");
  }

  getch();
}