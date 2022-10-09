#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main()
{
    string stat;
    int stat_size, plus = 0, counter = 0;
    cout << "Please enter a statement that only contains 1 & 2 & 3.." << endl;
    cin >> stat;

    stat_size = stat.size();
    int statInt[stat_size];

    for(int i = 0; i < stat_size; i++)
    {
        if(stat[i] == '+')
        {
            plus++;
            continue;
        }
       statInt[i] = stat[i] - '0';
    }
   

     for(int j = 0; j < stat_size; j+=2)
      {
         for(int x = 0; x < stat_size; x+=2)
         {
            if(statInt[x] > statInt[x+2])
            {
                int temp = statInt[x];
                statInt[x] = statInt[x+2];
                statInt[x + 2] = temp;
            }
         }
      }

    for(int i = 0; i < stat_size; i+=2)
    {
        
        cout << statInt[i];
        if(counter < plus)
        {
            cout << "+";
        }
        counter++;
    }
    cout << endl;
    
    getch();
    return 0;
}