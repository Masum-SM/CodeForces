#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str, str2;
    cin >> str >> str2;
    reverse(str.begin(), str.end());
    bool flag = true;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != str2[i])
        {
            flag = false;
            break;
        }
   
    }
         if (flag == true)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    return 0;
}