#include <stdio.h>
#include <conio.h>
#define PI 3.14
void main()
{
float r, l, b, cir_area, rect_area;
clrscr();
printf("Enter the value of radius r\n");
scanf("%f", &r);
cir_area = PI * r * r;
printf("Area of the circle is = %6.2f\n", cir_area);
printf("Enter the value of length\n");
scanf("%f", &l);
printf("Enter the value of breadth\n");
scanf("%f", &b);
rect_area = l * b;
printf("Area of the rectangle is = %6.2f\n", rect_area);
getch();
}
