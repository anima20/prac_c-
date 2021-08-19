#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int arr[10];
    
    int sum=0,p;

    for(int i =0 ; i<=5 ; i++)
    {
        cin>>arr[i];
            p=arr[i]*pow(2,i);        
            sum =sum+ p;
    
    }
    cout<<sum;
return 0;
}