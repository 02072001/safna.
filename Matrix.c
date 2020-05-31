#include<stdio.h>
void read(int a[],int r,int c)
  {
      int i,j;
      for(i=0;i<r;i++)
      {
          for(j=0;j<c;j++)
          {
              scanf("%d",&a[i][j]);
          }
      }
  }
void display(int a[],int r,int c)
  {
      int i,j;
      for(i=0;i<r;i++)
      {
          for(j=0;j<c;j++)
          {
              printf("%d\t",a[i][j]);
          }
          printf("\n");
      }
  }
void multiply(int a[],int b[],int r1,int c1,int c2)
  {
      int c[10][10],i,j,k;
      for(i=0;i<r1;i++)
      {
        for(j=0;j<c2;j++)
        {
            c[i][j]=0;
            for(k=0;k<c1;k++)
            {
                c[i][j]=((c[i][j]+a[i][k])*(b[k][j]));
            } 
        }
     }
     printf("\nProduct of matrix ");
     display(c,r1,c2);
  }
void transpose(int a[],int r,int c)
  {
      int C[10][10],i,j;
      for(i=0;i<r;i++)
      {
          for(j=0;j<c;j++)
          {
              C[j][i]=a[i][j];
          }
      }
      display(C,r,c);
  }
void main()
  {
      int a[10][10],b[10][10],r1,c1,r2,c2,ch;
      printf("Enter row size and coloumn size of matrix 1 : ");
      scanf("%d%d",&r1,&c1);
      printf("Enter row size and coloumn size of matrix 2 : ");
      scanf("%d%d",&r2,&c2);
      printf("\nEnter elements of matrix 1 :");
      read(a,r1,c1);
      printf("\nEnter elements of matrix 2 :");
      read(b,r2,c2);
      printf("\nMatrix 1\n");
      display(a,r1,c1);
      printf("\nMatrix 2\n");
      display(b,r2,c2);
      printf("\nMATRIX OPERATION ");
      printf("\n1.Matrix addition\n2.Matrix multiplication\n3.Matrix transpose");
      printf("\nEnter your choice : ");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1 : if((r1==r2)&&(c1==c2))
                   {
                        add(a,b,r1,c1)
                   }
                   else
                   {
                        printf("\nMatrix addition is not possible");
                   }
                   break;
          case 2 : if(c1==r2)
                   {
                          multiply(a,b,r1,c1,c2);
                   }
                   else
                   {
                        printf("\nMatrix multiplication is not possible");
                   }
                   break;
          case 3 :printf("\nTranspose of matrix 1 ");
                  transpose(a,r1,c1);
                  printf("\nTranspose of matrix 2 ");
                  transpose(b,r2,c2);
                  break;
         default :printf("\n*********ERROR*********");
      }
  }   
