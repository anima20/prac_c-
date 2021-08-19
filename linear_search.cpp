#include<iostream>
using namespace std;

int liner(int arr[] , int n , int key )
{
    for(int i =0 ; i<n ; i++)
    { 
        if(arr[i] == key)
        {
            return i;
        }
    }
    
        return 0;
    
}


int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key";
    cin>>key;
    int search;
    search=liner(arr,n,key);
    if(search== 0 )
    cout<<"Element not found";
    else
    cout<<"\nElement found at " << search+1 <<"th position";
return 0;
}