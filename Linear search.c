//Linear search
#include<stdio.h>
void main()
  {
        int array[20],n,i,x;
        printf("Enter the number of elements in the array : ");
        scanf("%d",&n);
        printf("\nEnter the array elements : ");
        for(i=0;i<n;i++)
        {
            scanf("%d",&array[i]);
        }
        printf("\nThe array elements are : ");
        for( i=0;i<n;i++)
        {
            printf(" %d\t",array[i]);
        }
        printf("\nEnter the element to be searched : ");
        scanf("%d",&x);
        for( i=0;i<n;i++)
        {
            if(x==array[i])
            {
                printf("\n%d is found at the position %d",x,i+1);
                break;
            }
            
        }
        if(i==n)
            {
                printf("\n%d is not present in the array ",x);
            }
}
