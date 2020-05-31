
 shilparanjith / CP-ASSIGNMENT
Code  Issues 0  Pull requests 0  Projects 0  Actions  Wiki  Security 0  Pulse  Community
CP-ASSIGNMENT/STRING CONCATENATION
@shilparanjith shilparanjith Update STRING CONCATENATION
9acdc6b 8 hours ago
24 lines (23 sloc)  589 Bytes
  
#include<stdio.h>
#include<string.h>
void main()
    {
          int i,j=0;
          char string1[50],string2[50];
          printf("Enter string 1 : ");
          scanf("%s",string1);
          printf("Enter string 2 : ");
          scanf("%s",string2);
          while (string1[i]!= '\0') 
          { 
               i++;
          }
          while (string2[j]!= '\0') 
          { 
              string1[i] = string2[j]; 
              i++; 
              j++; 
          } 
          string1[i] = '\0';
          printf("\nConcatenated string : %s ",string1);
     }
