#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 1; j <= m; j++)
            {
                cout << "#";
            }
            cout << endl;
        }
        else if (i % 4 == 2)
        {
            for (int j = 1; j < m; j++)
            {
                cout << ".";
            }
            cout << "#";
            cout << endl;
        }
        else
        {
            cout << "#";
            for (int j = 1; j < m; j++)
            {
                cout << ".";
            }

            cout << endl;
        }
    }

    return 0;
}