#include<iostream>
using namespace std;

typedef struct employee
{
    int eid;
    string ename;
    float salary;
}ep;


union money
{
    int rice;
    char car;
    float pounds;
};


int main()
{
    enum meal{breakfast,lunch,dinner};
    meal m1=dinner;
    cout<<m1;
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    ep e1;
    union money u1;
    u1.rice=34;
    u1.pounds=94;
    cout<<u1.pounds;
    cout<<"Enter id , anme and salary of employee";
    cin>>e1.eid>>e1.ename>>e1.salary;
    cout<<"eid = "<<e1.eid<<"\n ename = " << e1.ename <<"\n salary" <<e1.salary;


//------------------------------------------UNION----------------------------------------


    return 0;

}