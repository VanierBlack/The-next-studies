/* This program about the Fubanaci series of numbers
   using "for" loop.
*/


#include <iostream>
#include <conio.h>

using namespace std;

void replace(int &x1, int &x2, int &x_1_2)
{
    x_1_2 = x1 + x2;
    x1 = x2;
    x2 = x_1_2;
}

int main()
{
    int x0 = 1, x1 = 1, x_n_1, n;
    cout << "Enter the Fubanaci series n: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cout << x1 << endl;
        replace (x0, x1, x_n_1);
    }

    getch();
    return 0;
}