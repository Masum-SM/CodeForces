#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    string s1, s2;
    cin >> s1;
    int count = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        s1[i] = tolower(s1[i]);
    }
    sort(s1.begin(), s1.end());

    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s1[i + 1])
        {
            s2 += s1[i];
            count++;
        }
    }   
 
    if (count == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}