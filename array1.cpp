#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int maxno=INT_MIN; // INT_MIN given bcz we need to check our output so we need the min no. to check our ooutput
    int minno=INT_MAX; // INT_MAX given bcz we need to check our output so we need the max no. to check our ooutput
    for(int i=0 ; i<n ; i++)
    {
                                                        //    if (arr[i]>maxno)   
        maxno=max(arr[i],maxno);                        //    {
                                                        //        maxno = arr[i] ;
                                                        //    }


                                                        //    if(arr[i]<minno)
         minno=min(arr[i],minno);                       //    {
                                                        //        minno = arr[i];
                                                        //    }
    }
    cout<<"maxnumber = " << maxno <<"\nMinnumber" <<minno;

return 0;
}