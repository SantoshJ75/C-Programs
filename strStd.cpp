
#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
	struct student
   {
     char name[12];
     int age;
     float mark;
   }s[12];
   int i,j,t;
   char temp[12];
   for(i=0;i<5;i++)
   {
   	printf("\nEnter name age and mark\n");
   	scanf("%s%d%f",&s[i].name,&s[i].age,&s[i].mark);
   }
   for(i=0;i<5;i++)
   {
   	for(j=0;j<4;j++)
      {
      	if(s[j].mark<s[j+1].mark)
         {
         	t=s[j].mark;
            s[j].mark=s[j+1].mark;
            s[j+1].mark=t;

            t=s[j].age;
            s[j].age=s[j+1].age;
            s[j+1].age=t;

            strcpy(temp,s[j].name);
            strcpy(s[j].name,s[j+1].name);
            strcpy(s[j+1].name,temp);
         }
      }
   }
   for(i=0;i<5;i++)
   {
   	printf("\nName is %s age is %d and mark is %.2f",s[i].name,s[i].age,s[i].mark);
   }
   getch();
}