#include<stdio.h>
#define C_SIZE 50
union details
  {
      char name[C_SIZE],House_Name[C_SIZE],city[C_SIZE],state[C_SIZE],pin[C_SIZE];
  }info;
void mian()
  {
      printf("Enter Name : ");
      scanf("%[^\n]",info.name);
      printf("Enter House Name : ");
      scanf("%[^\n]",info.House_Name);
      printf("Enter City : ");
      scanf("%[^\n]",info.city);
      printf("Enter State : ");
      scanf("%[^\n]",info.state);
      printf("Enter Pin Code : ");
      scanf("%[^\n]",info.pin);
      printf("\nDetails \n");
      printf("\nName : %s\nHouse Name : %s\nCity : %s\nState : %s\nPin Code : %s",info.name,info.House_Name,info.city,info.state,info.pin);
  }    
