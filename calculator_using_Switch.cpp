#include<iostream>
using namespace std;
main()
{
	int choice,again ;
	float num1, num2;
	do{
	
		
	cout<<"enter 1 for addition :"<<endl;
	cout<<"enter 2 for subtraction :"<<endl;
	cout<<"enter 3 for multiplication :"<<endl;
	cout<<"enter 4 for division :"<<endl;
	cin>>choice;
	
	cout<<"enter values ";
	cin>>num1>>num2;
	
	switch(choice)
	{
		case 1:
			cout<<"the sum is :"<<num1+num2<<endl<<endl;
			break;
		
		case 2:
			cout<<"the difference is :"<<num1-num2<<endl<<endl;
			break;
		
		case 3:
			cout<<"the product is :"<<num1*num2<<endl<<endl;
			break;
		
		case 4:
			cout<<"the division is :"<<num1/num2<<endl<<endl;
			break;
		
		default :
			cout<<"the num is invalid please enter num between 1-4 "<<endl;}
			
	cout<<"enter 0 to rerun the program other wise press any key to terminate the program :"<<endl;
	cin>>again;				
							
	}while(again==0);
	cout<<"the program is finished ";
	
	
	return 0;
	
}