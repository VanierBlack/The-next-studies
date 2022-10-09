#include <iostream>
#include <conio.h>

using namespace std;

char alpl[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char alpu[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

void decoding_str_numcal(int num_test, string cases[])
{
    
    for (int i = 0; i < num_test; i++)
    {
        string temp = cases[i];
        int ecn = cases[i].length();
        for (int j = 0; j < ecn; j++)
        {
            for (int k = 0; k < 26; k++)
            {
                if (temp[j] == alpl[k] || temp[j] == alpu[k])
                {
                    if ((k + 1) < 10)
                    {
                        cout << (k + 1);
                        break;
                    }
                    else if ((k + 1) >= 10)
                    {
                        cout << (k + 1) << "0";
                        break;
                    }
                }
            }
        }
        cout << endl;
    }

}
int main()
{
    int test_cases;
    int counter = 0;
    cout << "Enter The Number of Test Cases: ";
    cin >> test_cases;
    cin.ignore();
    string enco[test_cases];
    while (counter < test_cases)
    {
        getline(cin, enco[counter]);
        counter++;
    }
    decoding_str_numcal(test_cases, enco);
    getch();
    return 0;
}