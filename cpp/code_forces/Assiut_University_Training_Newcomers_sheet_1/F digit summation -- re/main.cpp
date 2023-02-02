#include<iostream>
using namespace std;
int main()
{
    long long x,y;
    cin>>x>>y;
    (x>9)?x=x%10:x=x;
    (y>9)?y=y%10:y=y;
    cout<<x+y;

    
}