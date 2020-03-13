#include<stdio.h>
int main()
    {
    char operator;
    float first,second;
    printf("Enter an operator(+,-,*,/):");
    scanf("%c",&operator);
    print(Enter two operands :");
    scanf("%f %f",&first,&second);
    switch(operator);
          {
           case'+':
               printf("%f+%f=%f",first,second,first+second);
               break;
           case'-':
               printf("%f-%f=%f",first,second,first-second);
               break;
           case'*':
               printf("%f*%f=%f,first,second,first*second);
               break;
           case'/':
               printf("%f/%f=%f,first,second,first/second);
               break;
           //operator does not match any case constant
           default:
           printf("Error! operator is not correct");
           }
           return 0;
        }   
