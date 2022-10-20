#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
     double x, y, xp, xk, dx, R;

    cout<<"R = ";cin >>R;
    cout << "xp = "; cin >> xp; 
    cout << "xk = "; cin >> xk; 
    cout << "dx = "; cin >> dx;
    cout << fixed;
    cout << "---------------------------" << endl; 
    cout << "|" << setw(5) << "x" << "     |"
         << " |" << setw(7) << "y" << "    |" << endl; 
    cout << "---------------------------" << endl;
    x = xp;
   while ( x <= xk)
    {
        if (x<=-R)
        y=R;
    else 
        if (-R<x && x<=R)
            y = R - sqrt(R*R - x*x);
        else 
            if (R<x && x<=6)
                y= (R*(x-9)+3*x)/(R-6);
            else
                y= -9+x;
    cout << "|" << setw(7) << setprecision(2) << x
        << "      |" << setw(10) << setprecision(3) << y 
        << "      |" << endl;
    x += dx; 
    }
    cout << "---------------------------" << endl; 
    return 0; 
}