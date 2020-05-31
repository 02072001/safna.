#include<stdio.h>
struct euclidean
  {
      int distance1,distance2;
  }d;
void main()
  {
      int sum;
      printf("\nEnter the distance between first two points:");
      scanf("%d",&d.distance1);
      printf("\nEnter the distance between another two points:");
      scanf("%d",&d.distance2);
      sum=d.distance1+d.distance2;
      printf("\nTotal distance = %d",sum);
  }
