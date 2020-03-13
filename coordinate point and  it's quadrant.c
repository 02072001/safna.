#include<stdio.h>

void main()
	{
		float x,y;
	
		printf("\n Enter the coordinate of the point\n");
		scanf("%f%f",&x,&y);

		if(x==0 && y==0)
		  printf("\n The point is origin");
	
		else if(x==0 && y!=0)
		  printf("\n The point is on Y axis.");

		else if(x!=0 && y==0)
		  printf("\n The point is on X axis.");  

		else if(x>0 && y>0)
		  printf("\n The point is in First Quadrant.");
	
		else if(x<0 &&y >0)
		  printf("\n The point is in Second Quadrant.");

		else if(x<0 &&y <0)
		  printf("\n The point is in Third Quadrant.");

		else
		  printf("\n The point is in Forth Quadrant.");


	  }
