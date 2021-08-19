#include <iostream>
using namespace std;

int c=45;

int main()
{
    
    //--------------Built in data types-----------------
    
    int a,b,c;
    cout<<"ENter the value of a" ;
    cin>>a;
    cout<<"ENter the value of b" ;
    cin>>b;
    c=a+b;
    cout<<"the sum is " <<::c;


//-----------------------------------Literals-----------------------------------

    float d =34.4f;
    long double e = 34.4l;;
    cout<<"\nThe size of 34.4"  <<sizeof(34.4);
    cout<<"\nThe size of 34.4f" <<sizeof(34.4f);
    cout<<"\nThe size of 34.4F" <<sizeof(34.4F);
    cout<<"\nThe size of 34.4l" <<sizeof(34.4l);
    cout<<"\nThe size of 34.4L" <<sizeof(34.4L);
    cout<<"the value of d is "<<d<<". \nThe value of e is "<<e;



//---------------------------------Reference Variables-------------------------------
float x =1 ;
float &y=x;
cout<<x<<endl;
cout<<y<<endl;


//---------------------------------Typecasting---------------------------------------
int g=45;
float f = 3.4;
cout<<"value of a is " <<(float)g;
cout<<"value of f is " <<(int)f;


    
    return 0;
}