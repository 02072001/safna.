#include<math.h>                                                               
#include<stdio.h>                                                               
#define MAX 10                                                                  
                                                                                
void main()                                                                     
{                                                                               
 int i, n;                                                                      
 float num[MAX], deviation, sum, sumsqr, mean, variance, stddev;                
 sum = 0;                                                                       
 sumsqr =0;                                                                     
 n = 0;                                                                         
 printf("Enter number of elements:\n");                                         
 scanf("%d", &n);                                                               
                                                                                
 /* Reading array elements */                                                   
 printf("Input %d values \n", n);                                               
 for(i=0; i<n; i++)                                                             
 {                                                                              
  scanf("%f", &num[i]);                                                         
  sum += num[i];                                                                
 }                                                                              
   mean = sum/(float)n;                                                           
   printf("Mean is %f\n", mean);                                                  
   for(i=0;i<n;i++)                                                               
 {                                                                              
    deviation = num[i] - mean;                                                    
    sumsqr += deviation * deviation;                                              
 }           
 /* variance */                                                                   
 variance = sumsqr/(float)n;                                                    
 stddev = sqrt(variance);                                                       
 printf("Standard Deviation is %f\n", stddev);                                  
                                                                                
}   
