/* c program to calculate value of ncr and npr */
#include<stdio.h>
void main()
  {
    int n, r, fact1=1, fact2=1, i, p, c, fact3=1;
    printf("\n Enter the values for n and r:");
    scanf("%d%d",&n,&r);
    for(i=1;i<=n;i++)
       {
         fact1*=i;
       }
    for(i=1;i<=(n-r);i++)
       {
         fact2*=i;
       }
     p=fact1/fact2;
     for(i=1;i<=r;i++)
       {
         fact3*=i;
       }
     c=fact1/(fact3*fact2);
     printf("\n npr=%d",p);
     printf("\n ncr=%d",c);
   }
