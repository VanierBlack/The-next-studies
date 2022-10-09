/* This Program was Created to Enter a set of Student's degrees 
   in order to calculate his average in the subjects
*/


#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
    int num_subjects, average, sum = 0;
    cout << "How many subject do you want to enter: ";
    cin >> num_subjects;
    int degrees[num_subjects];

    for(int i = 0; i < num_subjects; i++)
    {
        cin >> degrees[i];
        sum += degrees[i];
    }
    
    average = sum / num_subjects;
    cout << "your average is: " << average << endl;

    getch();
    return 0;
}