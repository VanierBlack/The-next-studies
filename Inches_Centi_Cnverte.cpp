#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    const float CENTI_FOR_INCHES = 2.54;
    float centi, inches;
    cout << "Please enter how many centimeters you want to convert into inches: ";
    cin >> centi;

    inches = centi / CENTI_FOR_INCHES;

    cout << "Your centis " << centi << " is equal to " << inches << " inches." << endl;

    getch();
    return 0;
}