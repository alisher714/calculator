#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;

void table();
void fact();
void even();
bool checkPrimeNumber(int);
void Fibonacci();
void smallest();
void POWER();
void rectangle();
void area();
void celsius();
void fahrenhiet();
void swap();

int main()
{
	int a,n;
	do
	{
	cout<<"=========CALCULATOR==========\n";
	cout<<"enter operation you want to perform\n";
	cout<<"enter 1 for table of a number \n";
	cout<<"enter 2 for factorial of a number \n";
	cout<<"enter 3 for check whether the number is even or odd \n";
	cout<<"enter 4 for check whether the number is prime or not \n";
	cout<<"enter 5 for Fibonacci Series \n";
	cout<<"enter 6 for check smallest and largets number \n";
	cout<<"enter 7 to find the power of number \n";
	cout<<"enter 8 to find Area and Perimeter of a rectangle \n";
	cout<<"enter 9 to find Area and circumference of a circle \n";
	cout<<"enter 10 to convert Fahrenheit to Centigrade \n";
	cout<<"enter 11 to convert Centigrade to Fahrenheit \n";
	cout<<"enter 12 to swap the number \n";
	cout<<"enter 0 to finish the program ";
	cin>>a;
	system("cls");
	if(a==1)
	{
		table();
		getch();
		system("cls");
	}
	else if(a==2)
	{
		fact();
		getch();
		system("cls");
	}
	else if(a==3)
	{
		even();
		getch();
		system("cls");
	}
	else if(a==4)
	{
		cout << "Enter a positive  integer: ";
    	cin >> n;

    	if (checkPrimeNumber(n))
        cout << n << " is a prime number.";
    	else
        cout << n << " is not a prime number.";
        getch();
		system("cls");
	}
	else if(a==5)
	{
		Fibonacci();
		getch();
		system("cls");
	}
	else if(a==6)
	{
		smallest();
		getch();
		system("cls");
	}
	else if(a==7)
	{
		POWER();
		getch();
		system("cls");
	}
	else if(a==8)
	{
		rectangle();
		getch();
		system("cls");
	}
	else if(a==9)
	{
		area();
		getch();
		system("cls");
	}
	else if(a==10)
	{
		celsius();
		getch();
		system("cls");
	}
	else if(a==11)
	{
		fahrenhiet();
		getch();
		system("cls");
	}
	else if(a==12)
	{
		swap();
		getch();
		system("cls");
	}
}while(a!=0);
	
	
	
	return 0;
}
void table()
{
	int a;
	cout<<"enter a number :";
	cin>>a;
	cout<<"the table of "<<a<<" is :\n";
	for(int i=1; i<=10; i++)
	{
		cout<<a<<" * "<<i<<" = "<<a*i<<endl;
	}
}

void fact()
{
	int a,fact=1;
	cout<<"enter a number :";
	cin>>a;
	for(int i=1; i<=a; i++)
	{
		fact*=i;
	}
	cout<<"the factorial of "<<a<<" is : "<<fact;
}

void even()
{
	int a;
	cout<<"enter a num :";
	cin>>a;
	if(a%2==0)
	{
		cout<<a<<" is even number!";
	}
	else
	{
		cout<<a<<" is odd number!";
	}
}

bool checkPrimeNumber(int n) {
    bool isPrime = true;

    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

void Fibonacci()
{
    int t1 = 0, t2 = 1, nextTerm = 0, n;

    cout << "Enter a positive number: ";
    cin >> n;
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";

    nextTerm = t1 + t2;

    while(nextTerm <= n)
    {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
}

void smallest()
{
	float a , b , c;
	cout<<"enter any three numbers ";
	cin>>a >> b>> c;
	
	if(a>b && a>c)
	cout<<"greater number is "<<a;
	
	else if(b>a && b>c)
	cout<<"greater number is "<<b;
	
	else if(c>a && c>b)
	cout<<"greater number is "<<c;
	cout<<"\n";
	 if(a<b && a<c)
	cout<<"smallest number is "<<a;
	
	else if(b<a && b<c)
	cout<<"smallest number is "<<b;
	
	else if(c<a && c<b)
	cout<<"smallest number is "<<c;	
}

void POWER()
{
    int power;
    float base, result = 1;

    cout<<"enter number :";
    cin>>base;
    cout<<"enter power :";
    cin>>power;

    cout<<base<<"^"<<power<<" = ";

    while(power!=0)
	{
        result *= base;
        --power;
    }
	cout<<result;
}

void rectangle()
{
	int l, w,p,a;
	cout<<"enter length and width of a rectangle :\n";
	cin>>l>>w;
	
	p = 2*l + 2*w;
	
	a = l * w;
	
	cout<<"the perimeter of rectangle is : "<<p<<endl;
	cout<<"the area of rectangle is : "<<a;	
}

void area()
{
	float R,A,C;
	cout<<"enter radius of a cirle : ";
	cin>>R;
	
	A= 3.14*R*R;
	C= 2*3.14*R;
	
	cout<<"the circumference of circle is : "<<C<<endl;
	cout<<"the area of circle is : "<<A;	
}

void celsius()
{
	float temp,C;
	cout<<"enter temperature in fahrenheit : ";
	cin>>temp;
	
	C = (temp - 32) * 5/9;
	
	cout<<"the temperature in Celcius is "<<C;
}

void fahrenhiet()
{
	float temp,F;
	cout<<"enter temperature in Celsius : ";
	cin>>temp;
	
	F = (temp *9/5) + 32;
	
	cout<<"the temperature in fahrenheit is "<<F;
}

void swap()
{
	int a , b ;
	cout<<"enter number in a and b respectively:";
	cin>>a>>b;
	
	cout<<"----------before swaping---------\n";
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"--------after swaping--------\n";
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	
}




