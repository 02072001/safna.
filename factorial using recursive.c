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
int factorial(int num)
{
       int i=1,f=1;
               while(i<=num)

              {
                       f=f*i;
                       i++;
              }
return 0;
}
