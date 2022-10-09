#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    int num_Colors, counter = 0;
    string colors;
    
    cout << "Enter the number of colors: ";
    cin >> num_Colors;
    cout << "please Enter the signs of color(R is red, B is Blue, G is green): ";
    cin >> colors;

    for(int i = 0; i < colors.size(); i++)
    {
        if(colors[i] == colors[i+1])
        {
            counter++;
        }
    }

    cout << counter << endl;
    
    getch();
    return 0;
}
