#include <iostream>
using namespace std;

int main()
{
    int i,j,k,rows,count=1,num=1,space;
    cout<<"Enter the number of rows";
    cin>>rows;
    space=rows-1;

    for(i=1; i<=rows; i++){

        for(j=1; j<=space; j++){
        cout<<" ";
    }

         for(k=1; k<=num; k++){
        cout<<count%2;
        count++;
    }
    space--;
    num+=2;
    cout<<"\n";
    }
    return 0;
}


