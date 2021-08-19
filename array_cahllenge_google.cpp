#include<iostream>
using namespace std;

void g_array(int arr[] , int n)
{ 
    int pre_cd = arr[1]-arr[0];
    int adj_cd = arr[1]-arr[0];
    int currlen = 2;
    int globallen = 2;
    for(int i = 2 ; i<n ; i++)
    {  
        adj_cd = arr[i] - arr[i-1];
        if(pre_cd == adj_cd)
        {
            currlen++ ;
        }
        else
        {
            pre_cd=adj_cd;
            globallen=max(globallen,currlen);
            //currlen=2;
        }
        cout<<"krn"<<globallen<<endl; 
    }
   //globallen=max(globallen,currlen);
  // cout<<globallen; 
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