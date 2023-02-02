#include<iostream>
using namespace std;
int main()
{
    char operation;
    int num1,num2;
    cin>>num1>>num2;
    cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
    // here i made a mistake that i put int * int and the result is int so it is small in size;
    //1st solution i tried to type cast the result but the result is stored in int so if i changed int to long it dousn't matter no thing is gonna be changed
    //2nd solution is type cast one of parameters in equation 
    //someone will asks why not to use long long instead of int --> because the size of memory 
    cout<<num1<<" * "<<num2<<" = "<<(long long)num1*num2<<endl;
    cout<<num1<<" - "<<num2<<" = "<<num1-num2;

}