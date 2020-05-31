#include <stdio.h>
#include<conio.h>
int factorial(int);
void main()
{
          int n,fact;
          clrscr();
         printf(“Enter a positive integer: “);
         scanf(“%d”, &n);
         fact= factorial(n);
         printf(“Factorial of %d = %d”,n, fact) ;
       getch();

}
int factorial(int n)
{
          if (n==1)    //Base case
                return 1;
          else
                          return n*factorial(n-1);   // Inductive step

}

