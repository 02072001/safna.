#include<stdio.h>
#include<string.h>
void main()
    {
          char string[100];
          int vowels=0,consonants=0,spaces=0,i=0;
          printf("Enter the string : ");
          scanf("%[^\n]",string);
          while(string[i]!='\0')
          {
              if((string[i]>='a' && string[i]<='z') || (string[i]>='A' && string[i]<='Z'))
              {
                    if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='O'||string[i]=='U')
                    {
                         vowels++;
                    }
                    else
                    {
                        consonants++;
                    }
              }
              else if(string[i]==' ')
              {
                    spaces++;
              }
              i++;
          }
          printf("\nVowels = %d",vowels);
          printf("\nConsonants = %d",consonants);
          printf("\nSpaces = %d",spaces);
      }
