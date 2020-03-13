/* C Program to Find the Sum of First N Natural Numbers */
 
 #include <stdio.h>
 int main() 
 {
    int num, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 1; i <= num; ++i) 
     {
        sum += i;
     }

    printf("Sum = %d", sum);
    return 0;
 }
