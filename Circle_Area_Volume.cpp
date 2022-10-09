/* This program was created to calculate the Volume & the Area of a specific Sphere
   using PI and its Radius.
*/


#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int main()
{
    const float PI = 3.14;
    float radius, area, volume;
    cout << "Enter the Radius of the Sphere in order to calculate its Area & Volume : ";
    cin >> radius;

    area = PI * pow(radius, 2);
    volume = 2 * PI * radius;

    cout << "The Volume of the Sphere is: " << volume << " Cubic unit."<< endl;
    cout << "The Area of the Sphere is: " << area << " Square unit." << endl;

    getch();
    return 0;
}