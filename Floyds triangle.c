#include<stdio.h>
int main()
    {
     int rows,i,j,number=1;
     Printf("Enter number of rows:");
     Scanf("%d",&rows);
     for (i=1;i<=rows;i++)
         {
          for(j=1;j<=i;++j)
             {printf("%d",number);
               ++number;
             }
             printf("n");
         }
          return 0;
     }
        
