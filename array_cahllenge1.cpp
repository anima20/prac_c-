#include<iostream>
using namespace std;

void max_i(int arr[] , int n )
{
    
    //cout<<arr[0]<<" ";
    for(int i =1 ; i<n ; i++)
     {
    //     for(int j =0 ; j<=i ; j++)
    //     {
        
   arr[i]=max(arr[i],arr[i-1]); 
   cout<<arr[i]<<" " ; //        arr[i]=max(arr[i],arr[j]);     
    //     }
    }
}

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    max_i(arr,n);

    // for(int i =0 ; i<n ; i++)
    // {
    //     cout<<arr[i]<<" " ;
    // }
return 0;
}