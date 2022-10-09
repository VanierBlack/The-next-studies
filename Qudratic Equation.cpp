#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
    int a, b, c, delta, x1, x2, double_x;

    cout << "Pleas Enter a & b & c.." << endl;
    cin >> a >> b >> c;
    
    delta = pow(b, 2) - (4 * a * c);
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    double_x = -b / (2 * a);


    if(delta > 0)
    {
        cout << "There are two different solutions. " << endl;
        cout << "--------------------------" << endl;

        cout << "The First one is: " << x1 << endl;
        cout << "the Second one is: " << x2 << endl;

        cout << "--------------------------" << endl;

    }

    else if(delta == 0)
    {
        cout << "There is an only one double solution." << endl;
        cout << "Which is: " << double_x << endl;
        cout << "--------------------------" << endl;
    }

    else
    {
        cout << "--------------------------" << endl;
        cout << "The Equation has complex Numbers." << endl;
    }

    return 0;
}