/*This Program was created in order to calculate the factorial of n! positive numbers
  using "while" loop associated with factorial function
  in order to make the Code more readable
*/


#include <iostream>
#include <conio.h>
using namespace std;

int factorial(int n)
{
  int counter = 0, sum = 1;
   while(counter < n)
    {
       sum *= (n - counter);
       counter++;
    }

    return sum;
}

int main()
{
    int n;
    cout << "Enter your number: ";
    cin >> n;

    cout << "The result of " << n << "! is : " << factorial(n) << endl;

    getch();
    return  0;
}