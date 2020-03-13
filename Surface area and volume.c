/* to compute surface area and volume of cube, cylinder, cuboid, cone, sphere */

#include<stdio.h>
#include<math.h>

void main()
	{
		int ch;
		float a,r,h,x,y,z,pi=3.14;
	
		printf("\n Enter your choice: \n1. Cube\n 2. Cylinder\n 3. Cuboid\n 4. Cone\n 5. Sphere");
		scanf("%d",&ch);

		switch(ch)
			{
				case 1:
					printf("\n Enter the side length of cube: ");
					scanf("%f",&a);
					printf("\n Surface area=%f  \n Volume=%f", 6*a*a, a*a*a);
					break;

				case 2:
					printf("\n Enter the radius of base and height of cylinder: ");
					scanf("%f%f",&r,&h);
					printf("\n Surface area=%f  \n Volume=%f", 2*pi*r*r+pi*r*2*h, pi*r*r*h);
					break;

				case 3:
					printf("\n Enter the lengths of 3 sides of the cuboid: ");
					scanf("%f%f%f",&x,&y,&z);
					printf("\n Surface area=%f  \n Volume=%f", 2*x*y+2*x*z+2*y*z, x*y*z);
					break;

				case 4:
					printf("\n Enter the radius of base and height of cone: ");
					scanf("%f%f",&r,&h);
					printf("\n Surface area=%f  \n Volume=%f", pi*r*r+2*pi*r*sqrt(h*h+r*r), 1/3*3.14*r*r*h);
					break;
		
				case 5:
					printf("\n Enter the radius of sphere: ");
					scanf("%f",&r);
					printf("\n Surface area=%f  \n Volume=%f", 4*pi*r*r, 4/3*pi*r*r*r);
					break;

				default:
					printf("\n ERROR! Invalid choice! ");
					break;
	
			}


	}
