#include<stdio.h>

void main()

{

int a,b,c,large;

clrscr();

printf("Enter three numbers\n");

scanf("%d %d %d",&a,&b,&c);

if(a>b&&a>c)

large=a;

else if(b>c)

large=b;

else

large=c;

printf("\nThe largest among given three numbers = %d",large);

getch();

}