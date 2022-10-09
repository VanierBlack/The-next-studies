#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int si_Melon, even_piece, even_melon, even_part;
    cout << "Please enter the size of Melon: ";
    cin >> si_Melon;
    even_piece = si_Melon / 2;
    even_melon = si_Melon % 2;
    even_part = even_piece % 2;

    if(even_melon == 0)
    {
        if(even_part == 0)
        {
            cout << "It can be cut, and each one of them can have " << even_piece << " of the melon size" << endl;
        }
        else
        {
             cout << "The Melon cannot be cut in even weight" << endl;
        }
        
    }
    else
    {
        cout << "The Melon cannot be cut in even weight" << endl;
    }
    
    getch();
    return 0;
}