#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str,str2;
    cin >> str;
    int u = 0, l = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
            u++;
        else
            l++;
    }
    if (l >= u)
    {
        for (int i = 0; i < str.length(); i++)
        {
            str[i] = tolower(str[i]);
        }
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
             str[i] = toupper(str[i]);
        }
    }
    cout<<str<<endl;

    return 0;
}