#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
using namespace std;



int main()
{
    vector <string> words{""} ;
    string input;
    int si, lines;
    cout << "Please Enter How many lines you want to write on: " << endl;
    cin >> lines;
    cin.ignore();
    for(int i = 0; i < lines; i++)
    {
        getline(cin, input);
        words.push_back(input);
    }
     si = words.size();
    for(int i = 0; i < si; i++)
    {
        if(words[i].size() < 10)
        {
            cout << words[i] << endl;
        }
        else if(words[i].size() > 10)
        {
            int word_size = words[i].size();// the size of single word in a vector.
            string word_vec = words[i];// storing a specific element of vector in string variable.

            cout << word_vec[0] << word_size - 2 << word_vec[word_size - 1] << endl;
        }
    }

    getch();
    return 0;


}