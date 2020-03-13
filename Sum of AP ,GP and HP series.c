/* to find the sum of A.P, G.P and H.P series */

#include<stdio.h>
#include<math.h>

void main()
	{
		float a,d,n,r,sum=0;
		int c;
	
		printf("\n Choose the type of series:\n(1) Arithmatic Progression (AP)\n(2) Geometric Progression (GP)\n(3) Harmonic Progression (HP)");
		scanf("%d",&c);

		switch(ch)
			{
				case 1:
					printf("\n Enter the first term and common difference and number of terms of AP:");
					scanf("%f%f%f",&a,&d,&n);
	
					for(int i=0;i<n;i++)
					  {
						  sum=sum+(a+i*d);
					  }
			
					printf("\n The sum of %.1f terms of the AP is = %f",n,sum);  
					break;
		
				case 2:
					printf("\n Enter the first term and common ratio and number of terms of GP:");
					scanf("%f%f%f",&a,&r,&n);
		
					if(r<1)
						sum=(a*(1-pow(r,n))/(1-r));
	
					else
						sum=(a*(pow(r,n)-1)/(r-1));

					printf("\n Sum of %f terms of GP is=  %f",n,sum);
					break;
		
				case 3:
					printf("\n Enter the value of a,d and n in 1/(a+nd):");
					scanf("%f%f%f",&a,&d,&n);
		
					for(i=0;i<n;i++)
					  {
						  sum=sum+(1/(a+i*d));
					  }
		
					printf("\n Sum of %f terms of the HP is = %f",n,sum);
					break;
		
				default:
					printf("\n Invalid choice!");
					break;
			}


	}
