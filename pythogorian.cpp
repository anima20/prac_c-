#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

void pytha(int a, int b , int c)
{
    if((a*a) == ((b*b)+(c*c)))
    cout<<"is pythagorian triangle";
    else
    cout<<"is not pythagorian triangle";
}

int main(){
    int a,b,c,m;
    cin>>a>>b>>c;
    m=max(a,max(b,c));
    if(m==b)
    {
        pytha(b,a,c);
    }
    if(m==c)
    {
        pytha(c,a,b);
    }
    if(m==a)
    {
        pytha(a,b,c);
    }
    
return 0;
}