#include<iostream>
using namespace std;
int main()
{
    //we will try to use three variables;
    long long x,y,result;
    cin>>x>>y;
    // here i stored the value in a result
    result=x*y;
    // then i overwrites the new data on the same variables
    cin>>x>>y;

    cout<<"Difference = "<<result-(x*y);

}