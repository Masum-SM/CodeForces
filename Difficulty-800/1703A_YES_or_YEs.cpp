#include <bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;
        bool flag = false;
        for (int i = 0; i < 3; i++)
        {
            if (tolower(str[0]) == 'y' && tolower(str[1]) == 'e' && tolower(str[2]) == 's')
            {
                flag = true;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}