#include <iostream.h>
#include <conio.h>
class test
{
  public:
  	void info()
   {
   	cout<<"This is in class test"<<endl;
   }
};
class rest:public test
{
	public:
   	void info()
      {
      	cout<<"This is in class rest"<<endl;
      }
};
class nest:public rest
{
  public:
  	void info()
   {
   	cout<<"This is in class nest"<<endl;
   }
};
void main()
{
   test*p;
   test t;
   p=&t;
   p->info();

   rest r;
   p=&r;
   p->info();

   nest n;
   p=&n;
   p->info();
	getch();
}


#include <iostream.h>
#include <conio.h>
class test
{
  public:
  	virtual void info()
   {
   	cout<<"This is in class test"<<endl;
   }
};
class rest:public test
{
	public:
   	void info()
      {
      	cout<<"This is in class rest"<<endl;
      }
};
class nest:public rest
{
  public:
  	void info()
   {
   	cout<<"This is in class nest"<<endl;
   }
};
void main()
{
   test*p;
   test t;
   p=&t;
   p->info();

   rest r;
   p=&r;
   p->info();

   nest n;
   p=&n;
   p->info();
	getch();
}

//check error info
#include <iostream.h>
#include <conio.h>
class test
{
  public:
  	virtual void info()=0;
};
class rest:public test
{
	public:
   	void info()
      {
      	cout<<"This is in class rest"<<endl;
      }
};
class nest:public rest
{
  public:
  	void info()
   {
   	cout<<"This is in class nest"<<endl;
   }
};
void main()
{
   test*p;
   test t;

   rest r;
   p=&r;
   p->info();

   nest n;
   p=&n;
   p->info();
	getch();
}


#include <iostream.h>
#include <conio.h>
class test
{
  public:
  	virtual void info()=0;
};
class rest:public test
{
	public:
   	void info()
      {
      	cout<<"This is in class rest"<<endl;
      }
};
class nest:public rest
{
  public:
  	void info()
   {
   	cout<<"This is in class nest"<<endl;
   }
};
void main()
{
   test*p;

   rest r;
   p=&r;
   p->info();

   nest n;
   p=&n;
   p->info();
	getch();
}

/*
	Scenario:
   	harek class haru interconnected cha via inheritance
      each and every class ma same function cha with different content
      base class pointer ko through bata kam garda jaile pani top priority or high privilage
      base class ko content le paucha
      so the output was:
      	this is in class test
         this is in class test
         this is in class test
      i.e. each and every time pointer p vetne bittikai base class ma vayeko info fxn is activated

      tyesto bela child class ko content lai activate garna we use the keyword virtual
      jaba kunai function ko agadi virtual vanne keyword use garincha then that function becomes
      virtual function
      after that new op:
      	this is in class test
         this is in class rest
         this is in class nest
      this is the concept linked with overriding

      jaba kunai virtual function=0 lekhincha then that virtual function becomes
      pure virtual function
      =0 lekheko value assign gareko haina, virtual lai pure matra banayeko ho

      jun class ma pure virtual fxn huncha that class becomes abstract class
      asbtract class ko object banauna paidaina

      esle processing speed ma considerable effect gardaina but is very helpful to
      manage and present the program logic clearly

      eslai nai run time polymorphism pani vanincha
      poly: multiple
      morphing: appearance

*/