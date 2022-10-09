/* This Program was designed to calculate the Area & the Volume of a Cylinder
   using its Radius & Height.
*/


#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main()
{
    const float PI = 3.14;
    float radius, height, volume, area;

    cout << "Please Enter the Radius of Cylinder: ";
    cin >> radius;
    cout << "-----------------------------------------" << endl;
    cout << "Now please Enter the Height of Cylinder: ";
    cin >> height;

    area = pow(radius, 2) * PI;
    volume = area * height;

    cout << "-----------------------------------------------------" << endl;
    cout << "The Area of Cylinder is: " << area << " Square unit." << endl;
    cout << "The Volume of Cylinder is: " << volume << " Cubic unit." << endl;

    cout << "--------------------------------------------------------" << endl;

    getch();

    return 0;
}