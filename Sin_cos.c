#include<stdio.h>
#include<math.h>
void main()
{
	float angle;
	printf("Enter the angle\n");
    scanf("%f",&angle);
    printf("sin(%f)=%f  cos(%f)=%f",angle,sin((angle*3.141592654/180)),angle,cos((angle*3.141592654/180)));
}
