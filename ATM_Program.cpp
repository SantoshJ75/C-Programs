#include <stdio.h>
#include <conio.h>
void main()
{
	int pin,pin_O=1234;
	printf("\n\t\tWelcome to ABCD Bank\n");
   printf("\t------------------xxxxxxxx----------------\n");
   printf("Insert your card:---");
   printf("\nEnter your pin code: ");
   scanf("%d",&pin);
   if(pin==pin_O)
   {
   	printf("Welcome");
   }
   else
   {
   	printf("Wrong Pin code");
   }
	getch();
}


#include <stdio.h>
#include <conio.h>
void main()
{
	int pin,pin_O=1234,ic;
	printf("\n\t\tWelcome to ABCD Bank\n");
   printf("\t------------------xxxxxxxx----------------\n");
   printf("Insert your card:---");
   printf("\nEnter your pin code: ");
   scanf("%d",&pin);
   clrscr();
   if(pin==pin_O)
   {
   	printf("1 Cash withdrawl\t2 Fast Cash");
      printf("\n3 Balance Enquiry\t4 Pin Change\n");
      scanf("%d",&ic);
      switch(ic)
      {
      	case 1:
         break;

         case 2:
         break;

         case 3:
         break;

         case 4:
         break;

         default:
         	printf("Invalid");
      }
   }
   else
   {
   	printf("Wrong Pin code");
   }
	getch();
}

#include <stdio.h>
#include <conio.h>
void main()
{
	int pin,pin_O=1234,ic,count=0;
	printf("\n\t\tWelcome to ABCD Bank\n");
   printf("\t------------------xxxxxxxx----------------\n");
   printf("Insert your card:---");
while(count<3)
{
   printf("\nEnter your pin code: ");
   scanf("%d",&pin);
   clrscr();
   if(pin==pin_O)
   {
   	printf("1 Cash withdrawl\t2 Fast Cash");
      printf("\n3 Balance Enquiry\t4 Pin Change\n");
      scanf("%d",&ic);
      switch(ic)
      {
      	case 1:
         break;

         case 2:
         break;

         case 3:
         break;

         case 4:
         break;

         default:
         	printf("Invalid");
      }
   }
   else
   {
   	printf("\nWrong Pin code");
      count++;
   }
}
if(count==3)
{
	clrscr();
	printf("\nCard Seized!!\nPlease contact main branch!!");
}
	getch();
}


#include <stdio.h>
#include <conio.h>
void main()
{
	int pin,pin_O=1234,ic,count=0;
	printf("\n\t\tWelcome to ABCD Bank\n");
   printf("\t------------------xxxxxxxx----------------\n");
   printf("Insert your card:---");
while(count<3)
{
   printf("\nEnter your pin code: ");
   scanf("%d",&pin);
   clrscr();
   if(pin==pin_O)
   {
   	printf("1 Cash withdrawl\t2 Fast Cash");
      printf("\n3 Balance Enquiry\t4 Pin Change\n");
      scanf("%d",&ic);
      switch(ic)
      {
      	case 1:
         break;

         case 2:
         break;

         case 3:
         break;

         case 4:
         break;

         default:
         	printf("Invalid");
      }
      count=4;
   }
   else
   {
   	printf("\nWrong Pin code");
      count++;
   }
}
if(count==3)
{
	clrscr();
	printf("\nCard Seized!!\nPlease contact main branch!!");
}
	getch();
}


#include <stdio.h>
#include <conio.h>
void main()
{
	int pin,pin_O=1234,ic,count=0;
	printf("\n\t\tWelcome to ABCD Bank\n");
   printf("\t------------------xxxxxxxx----------------\n");
   printf("Insert your card:---");
while(count<3)
{
   printf("\nEnter your pin code: ");
   scanf("%d",&pin);
   clrscr();
   if(pin==pin_O)
   {
   	printf("1 Cash withdrawl\t2 Fast Cash");
      printf("\n3 Balance Enquiry\t4 Pin Change\n");
      scanf("%d",&ic);
      switch(ic)
      {
      	case 1:
         break;

         case 2:
         break;

         case 3:
         break;

         case 4:
         break;

         default:
         	printf("Invalid");
      }
      break;
   }
   else
   {
   	printf("\nWrong Pin code");
      count++;
   }
}
if(count==3)
{
	clrscr();
	printf("\nCard Seized!!\nPlease contact main branch!!");
}
	getch();
}