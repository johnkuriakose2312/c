#include<stdio.h>
#define PI 3.142
#define CIRCLE_AREA(r)(PI*r*r)
#define SA(r,h)(2*PI*r*(r+h))
int main()
{
float r,h,area,sa;
printf("Enter the area ");
scanf("%f",&r);
printf("Enter the height");
scanf("%f",&h);
area=CIRCLE_AREA(r);
sa=SA(r,h);
printf("The area of the circle is %f\n",area);
printf("The surface area of the cylinder is %f",sa);
return 0;
}
