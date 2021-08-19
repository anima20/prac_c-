#include<iostream>
using namespace std;

void fact(int n )
{
    int mul=1;
    for(int i=1;i<=n ;i++)
    {
        mul=i*mul;
        
    }
    cout<<mul;
}

int main(){
    int n;
    cin>>n;
    fact(n);
return 0;
}