/* C Program to Find Prime Numbers in a given Range */

#include <stdio.h>
int main()
 {
    int min, max, i, flag;
    printf("Enter the range: ");
    scanf("%d %d", &min, &max);
    printf("Prime numbers between %d and %d are: ", min, max);

    while (min < max)
      {
        flag = 0;
        
        for (i = 2; i <= min / 2; ++i)
          {
            if (min % i == 0) 
              {
                flag = 1;
                break;
              }
          }

        if (flag == 0)
            printf("%d ", min);
        ++min;
      }

    return 0;
 }
