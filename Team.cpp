#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    int problems, ones = 0, solution = 0, person = 3;
    string opin[problems];

    cout << "Please enter the number of problems in the contest: ";
    cin >> problems;
    cin.ignore();
    
    cout << "Now can you please enter whether there is solution or not,(it should only contain 1 & 0): " << endl;
  
    for(int i = 0; i < problems; i++)
    {
        getline(cin ,opin[i]);
    }
    
    for(int i = 0; i < problems; i++)
    {
        string per = opin[i];
        for(int j = 0; j < per.size(); j++)
        {
            if(per[j] == '1')
            {
                 ones++;
            }
        }
    }
    
    solution = ones / person;
    cout << "There is " << solution << " Solution." << endl;
    return 0;
}
