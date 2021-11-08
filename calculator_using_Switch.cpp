#include<iostream>
using namespace std;
main()
{
	int a,y ;
	float b, c;
	do{
	
		
	cout<<"enter 1 for addition :"<<endl;
	cout<<"enter 2 for subtraction :"<<endl;
	cout<<"enter 3 for multiplication :"<<endl;
	cout<<"enter 4 for division :"<<endl;
	cin>>a;
	
	cout<<"enter values ";
	cin>>b>>c;
	
	switch(a)
	{
		case 1:
			cout<<"the sum is :"<<b+c<<endl<<endl;
			break;
		
		case 2:
			cout<<"the difference is :"<<b-c<<endl<<endl;
			break;
		
		case 3:
			cout<<"the product is :"<<b*c<<endl<<endl;
			break;
		
		case 4:
			cout<<"the division is :"<<b/c<<endl<<endl;
			break;
		
		default :
			cout<<"the num is invalid please enter num between 1-4 "<<endl;}
			
	cout<<"enter 0 to rerun the program other wise press any key to terminate the program :"<<endl;
	cin>>y;				
							
	}while(y==0);
	cout<<"the program is finished ";
	
	
	return 0;
	
}