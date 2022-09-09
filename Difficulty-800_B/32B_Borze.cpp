#include <bits/stdc++.h>

using namespace std;

int main()
{
    string ternary;
    string number = " ";
    cin >> ternary;
    for (int i = 0; i < ternary.length(); i++)
    {
        if (ternary[i] == '-' && ternary[i + 1] == '-')
        {
            number += "2";
            i++;
        }
        else if (ternary[i] == '-' && ternary[i + 1] == '.')
        {
            number += "1";
            i++;
        }

        else if (ternary[i] == '.')
            number += "0";
    }
    cout <<number << endl;

    return 0;
}