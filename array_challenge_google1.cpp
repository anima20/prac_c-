#include<iostream>
using namespace std;

void g_array(int arr[] , int n)
{
    int break_day=0;
    int max_visit=INT_FAST16_MIN;
    //int no_visitor=0;
    for(int i=0 ; i<n ; i++)
    {
       
        
            
               cout<<"\n no o visitor" <<max_visit;
               cout<<"\narr[i] = "<<arr[i];
                if(max_visit < arr[i])
                {  
                    if(i==n-1 || arr[i+1]<arr[i])
                    {
                     break_day ++; 
                     cout<<"\n no of breakday "<<break_day;
                    }
                }
            
           //no_visitor += arr[i];
           max_visit=max(arr[i],max_visit);
    }
    cout<<"\n no of breakday "<<break_day;
}

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
g_array(arr,n);
return 0;
}