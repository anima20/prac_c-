#include<iostream>
#include<math.h>
using namespace std;

bool prime(int num)
{
    //bool bol=true;
    for(int i=2 ; i<=num/2 ;i++)
    {
        if(num%i==0)
        {
            // cout<<"Not Prime\n";
            //  bol=false;
            //  break;
            return false;
        }
    }
    // if(bol==true)
    // cout<<"Prime\n";
    return true;

}

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a ; i<=b ; i++) 
    {
        bool b=prime(i);
        if(b==true)
        {
            cout<<i <<" is prime\n";
        }
        else{
            cout<<i <<" is not prime\n";
        }

    }
return 0;
}