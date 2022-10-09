#include <iostream>
#include <conio.h>

using namespace std;

int translate(string str1 , string str2, int si, int char_count = 0)
{
    for(int i = 0, j = si - 1; i < si && j >= 0; i++, j--)
    {
        if(str1[i] == str2[j])
        {
            char_count++;
        }
    }
    return char_count;
} 

int main()
{
    string berlish, birlish;
    int char_count, siz;

    cout << "Please enter the word in Berlandish: ";
    cin >> berlish;

    cout << "Now please Enter the word in Birlandish: ";
    cin >> birlish;
    
    siz = birlish.size();
    
    char_count = translate(birlish, berlish, siz);
    
    if(char_count == siz)
    {
        cout << "---------------------------" << endl;
        cout << "The both " << berlish << " and " << birlish << " are equal..." << endl;
    }
    else
    {
        cout << "--------------------------------------" << endl;
        cout << "Unfortunately they are not the same..." << endl;
    }


    getch();
    return 0;
}