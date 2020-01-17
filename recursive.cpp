#include<iostream>
using namespace std;
int fact_recursion(int num)
{
	if(num>1)
	return num*fact_recursion(num-1);
	else
	return 1;
}
int fact_iteration(int num)
{
	int fact=1;
	for(int i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	return fact;
}
int pow_iterative(int a,int b)
{
	int sol=1;
	for(int i=b;i>0;i--)
	{
		sol=sol*a;
	}
	return sol;
}
int pow_recursive(int a , int b)
{
	if(b!=0)
	return (a*pow_recursive(a,b-1));
	else
	return 1;
}
int gcd_iterative(int a,int b)
{
	int temp;
	while(b!=0)
	{
		temp=a;
		a=b;
		b=temp%a;
	}
	return a;
}
int gcd_recursive(int a , int b)
{
	if(b==0)
	return a;
	else
	return gcd_recursive(b,a%b);
}
int fib_rec(int num)
{
	if(num==1||num==0)
	return num;
	else 
	return (fib_rec(num-1)+fib_rec(num-2));
}
int fib_ite(int num)
{
	int t1=0,t2=1,next=0;
	for(int i=1;i<=num;i++)
	{
		if(i==1)
		{
			cout<<t1;
			
		}
		 if(i==2)
		{
			cout<<t2;
		}
		else
		{
			next=t1;
			t1=t1+t2;
			t2=next;
			cout<<next;
		}
	}
	return 0;
}
int main()
{
	char ch ;
	do
	{
		int choice;
		int secchoice,num,base,power,i,num1,num2;
		cout<<" enter 1 to factorial of a given number "<<endl;
		cout<<" enter 2 to get power of a given function "<<endl;
		cout<<" enter 3 to print fibonacci series "<<endl;
		cout<<" enter 4 to take gcd of two numbers  "<<endl;
		cout<<" \n\n enter your choice "<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					cout<<" to call recursive function enter 1 "<<endl;
					cout<<" to call iterative function enter 2 "<<endl;
					cin>>secchoice;
					if(secchoice==1)
					{
						
						cout<<" enter a number for factorial ";
						cin>>num;
						cout<<" factorial by recursion ";
						cout<<fact_recursion(num);
					}
					else if(secchoice==2)
					{
						cout<<" enter number for factorial";
						cin>>num;
						cout<<" factorial by iteration ";
						cout<<fact_iteration(num);
					}
					else
					{
						cout<<" you enter wrong choice ";
					}
				}
				break ;
			case 2:
				{
					cout<<" to call recursive function enter 1 "<<endl;
					cout<<" to call iterative function enter 2 "<<endl;
					cin>>secchoice;
					if(secchoice==1)
					{
						cout<<" enter base : ";
						cin>>base;
						cout<<" enter power : ";
						cin>>power;
						cout<<" power by : ";
						cout<<" recursive method : "<<pow_recursive(base,power);
					}
					else  if(secchoice==2)
					{
						cout<<" enter base : ";
						cin>>base;
						cout<<" enter power : ";
						cin>>power;
						cout<<" power by : ";
						cout<<" iterative method : "<<pow_iterative(base,power);
					}
					else
					{
						cout<<" you enter wrong choice ";
					}
				}
			break ;
			case 3:
				{
					cout<<" to call recursive function enter 1 "<<endl;
					cout<<" to call iterative function enter 2 "<<endl;
					cin>>secchoice;
					if(secchoice==1)
					{
						cout<<" enter number upto which you want fibonacci series ";
						cin>>num;
						cout<<" fibonacci by recursion ";
						while(i<num)
						{
							cout<<fib_rec(i);
							i++;
						}
					}
					else if(secchoice==2)
					{
						cout<<" enter number upto which you want fibonacci series ";
						cin>>num;
						cout<<" fibonacci by iteration ";
						fib_ite(num);
					}
					else
					{
						cout<<" you enter wrong choice ";
					}
				}
			break ;
			case 4:
				{
					cout<<" to call recursive function enter 1 "<<endl;
					cout<<" to call iterative function enter 2 "<<endl;
					cin>>secchoice;
					if(secchoice==1)
					{
						int num1,num2;
						cout<<" enter two numbers : ";
						cin>>num1>>num2;
						cout<<" gcd of two numbers is : ";
						cout<<" by recursive method : ";
						cout<<gcd_recursive(num1,num2);
					}
					else if(secchoice==2)
					{
						cout<<" enter two numbers : ";
						cin>>num1>>num2;
						cout<<" gcd of two numbers is : ";
						cout<<" by iterative method : ";
						cout<<gcd_iterative(num1,num2);
					}
					else
					{
						cout<<" you enter wrong choice " ;
					}
				}
			break;
			default :
			cout<<" you enter wrong choice ";
			break ;
		}
	cout<<" do you wish to continue (Y/N) : ";
	cin>>ch;
	}while(ch=='Y');
return 0;
}
