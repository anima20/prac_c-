#include<iostream>
using namespace std;


int binary(int arr[] , int n , int key)
{
    int high = n;
    int low = 0;
    while(low<=high)
    {
        int mid = (high+low)/2;
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
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
    search=binary(arr,n,key);
    if(search== 0 )
    cout<<"Element not found";
    else
    cout<<"\nElement found at " << search+1 <<"th position";

return 0;
}