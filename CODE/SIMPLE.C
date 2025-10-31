#include<stdio.h>

#include<math.h>

void main()

{

int N;

float P,R,SI,CI;

clrscr();

printf("Enter the principal amount\n");

scanf("%f",&P);

printf("\nEnter number of years\n");

scanf("%d",&N);

printf("\nEnter rate of interest\n");

scanf("%f",&R);

SI=(P*N*R)/100;

CI=P*pow(1+R/100,N)-P;

printf("\nSimple Interest = Rs.%6.2f",SI);

printf("\nCompound Interest = %6.2f",CI);

getch();

}