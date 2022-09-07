#include <bits/stdc++.h>

using namespace std;

int main()
{
    int year;
    cin >> year;
    while (true)
    {
        year++;
        string str;
        str = to_string(year);
        sort(str.begin(),str.end());
        int k = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == str[i + 1])
            {
                k = 1;
                break;
            }
            
        }
        if(k == 0){
            cout<<year;
            break;
        }
        
    }

    return 0;
}