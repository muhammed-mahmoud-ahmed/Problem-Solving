#include<iostream>
#include<iomanip>
using namespace std;
double area(double radius);
int main()
{
    double radius;
    cin>>radius;
    //there is a function called fixed<<setprecision(n)<<output --> n is the number of digits you want to appear after decimal point ;
    cout<<fixed<<setprecision(9)<<area(radius);
}
double area(double radius)
{
    return radius* radius * 3.141592653;
    //here i wrote 22.0 to make it float because if i wrote it 22 it will be int and it will be int over int
    // so it will return int not float
}