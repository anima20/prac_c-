
#include<iostream>  //# include is a header file  which basially helps in input and output . 
                    // stream means sequence of byte
                    //Input stream means direction of flow of bytes is from inpt device (keyboard)to main memory 
                    //Ouput stream means direction of flow of bytes is from main memory to output device (display)
//there are two types of header file:
//1. System defined header file : It comes with the compiler
//2. User defined header file : It is written by thr programmer
//syntax foe user defined header file #include "anima.h"

using namespace std; //this means that we can use all functions under std without :: (i.e scope resolution opretator) 

int glob=9;
void sum()
{
    int a = 2;
    cout<< "glob = "<<glob;
}

int main()
{
    int a=3,b=5,glob=0;
    cin>>a ; // Extraction opeator
    sum();
    cout<<"The avlue of a is " << a <<".\nThe value of b is " << b <<".\n gloab value is" <<glob; //Insertion operator
    return 0;
}