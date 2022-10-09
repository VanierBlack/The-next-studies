/* This program was designed specifically to Rearrange numbers in a specific array
   in Ascending order
*/

#include <iostream>
#include <conio.h>

using namespace std;

void reArrange(int array[], int si_ze)
{
    for(int i = 0; i < si_ze; i++)
    {
        for(int j = 0; j < si_ze; j++)
        {
            if(array[j] > array[j+1])
            {
                int t = array[j];
                array[j] = array[j+1];
                array[j+1] = t;
            }
        }
    }
}


int main()
{
    int numbers;
    cout << "How many number you want to enter: ";
    cin >> numbers;

  

    int num[numbers];
    cout << "Enter a sequence of numbers down below: " << endl;
    
    for(int i = 0; i < numbers; i++)
    {
        cin >> num[i];
    }

    reArrange(num, numbers);

    for(int i = 0; i < numbers; i++)
    {
        cout << num[i] << " ";
    }

    cout << endl;

    getch();
    return 0;
}