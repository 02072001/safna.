//bubble sort
#include<stdio.h>
void main()
  {
        int array[20],n,i,pass,temp;
        printf("Enter the number of elements in the array : ");
        scanf("%d",&n);
        printf("\nEnter the array elements : ");
        for( i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
        printf("\nThe array elements are : ");
        for( i=0;i<n;i++)
        {
            printf("%d\t",array[i]);
        }
       
        for(pass=0;pass<=n-1;pass++)
        {
            for(i=0;i<n-1;i++)
            {
                if(array[i]>array[i+1])
                {
                    temp=array[i];
                    array[i]=array[i+1];
                    array[i+1]=temp;
                }
            }
        }
        printf("\nThe sorted array after bubble sort : ");
        for( i=0;i<n;i++)
        {
            printf("%d\t",array[i]);
        }
  }        
