#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string x,y;
    bool xl = 0;
    cin >> x;
    cin >> y;

    int l = x.size();

    for(int i = 0; i < l; i++)
    {

        for(int j = l-1; j>= 0; j--)
        {
            if(i != (l-1) - j)
            {
                break;
            }
            else if(x[i] != y[j])
            {
                xl = 1;
            }
            
        }
    }

    if(xl == 1)
    {
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }

    return 0;
}