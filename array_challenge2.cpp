#include<iostream>
using namespace std;

void array_c2(int arr[] , int n)
{
    
    for(int i = 0 ; i < n ; i++)
    {
        int sum=0;
        for(int j =i ; j<n ; j++)
        {
            //sum += arr[j];
            cout<<arr[j] << " " ; //to print elemnt of subarray
            //cout<<sum <<endl; /// to print sum of subaray
        }
        cout<<endl;
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

    array_c2(arr,n);

return 0;
}