#include <stdio.h>
#include <string.h>
void reverse(char string[])
  {
    char rev[30];
    int length,i,j=0;
    length=strlen(string);
        for(i =(length- 1); i >= 0; i--)
  	    {
  		      rev[j] = string[i];
              j++;
  	    }
  	    rev[j] = '\0';
  	    printf("\nString after reversing : %s",rev);
  }
int main()
    {
  	    char string[30];
  	    printf("\nEnter string : ");
  	    scanf("%[^\n]",string);
  	    reverse(string);
  	    return 0;                                                     
  	    
    }    
