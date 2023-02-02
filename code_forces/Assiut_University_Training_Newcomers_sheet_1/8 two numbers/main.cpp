#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cin >> x >> y;
    if (x == y)
    {
        cout << "floor " << x << " / " << y << " = " << 1 << endl;
        cout << "ceil " << x << " / " << y << " = " << 1 << endl;
        cout << "round " << x << " / " << y << " = " << 1 << endl;
    }
    else
    {
        
        // floor --> the output of it i'll take the int of it & print it
        cout << "floor " << x << " / " << y << " = " << (int)(x / y) << endl;
        // to get ceil --> i will +1 the above num;
        cout << "ceil " << x << " / " << y << " = " << ((int)(x / y)) + 1 << endl;
        // to get round i have an idea i will add 0.5 for x/y(int) & if the result of (x/y)(double)>=x/y(int) so i'll go with x/y+1 else i'll go with x/y
        ((((int)(x / y)) + 0.5) > (x / y)) ? cout << "round " << x << " / " << y << " = " << ((int)(x / y)) : cout << "round " << x << " / " << y << " = " << (((int)(x / y)) + 1) << endl;
    }
}
