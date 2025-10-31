#include <stdio.h>

void main()

{

long int fact(int);

int n;

long int f;

clrscr();

printf("\nEnter the value of n\n");

scanf("%d", &n);

f = fact(n);

printf("\nThe factorial value of %d is %ld",n,f);

getch();

}

long int fact(int n) 

{

long int f;

if(n==0)

return (1);

else

f=n*fact(n-1);

return(f);

}
