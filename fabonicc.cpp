#include<iostream>
using namespace std;

void fibo(int num)
{
    int a =0 , b=1;
    cout<<a <<" "<<b <<" ";
    for(int i =2 ; i<num ; i++)
    {
        int c =a+b;
        cout<<c <<" ";
        a=b;
        b=c;
    }
}


int main(){
    int n ;
    cin>>n;
    fibo(n);
return 0;
}