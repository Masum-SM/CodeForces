#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    char str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    while (t--)
    {
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'B' && str[i + 1] == 'G')
            {
                swap(str[i], str[i + 1]);
                i++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << str[i];
    }

    return 0;
}