#include<iostream>
using namespace std;

int fact(int n )
{
    int mul=1;
    for(int i=1;i<=n ;i++)
    {
        mul=i*mul;
        
    }
    return mul;
}

int main(){
    int n,r,ncr;
    cin>>n>>r;
    for(int i = 0 ; i<n ; i++)
    {
        for(int j =0 ; j<=i ; j++)
        {
            ncr=fact(i)/(fact(i-j)*fact(j));
            cout<<ncr<<"  ";
        }
        cout<<endl;
    }
   
return 0;
}