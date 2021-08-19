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
    ncr = fact(n)/(fact(n-r)*fact(r));
    cout<<ncr;
return 0;
}