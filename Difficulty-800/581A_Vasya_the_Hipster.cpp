#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n == m)
    {
        cout << n << " " << 0 << endl;
    }
    else if (n > m)
    {
        cout << m;
        int f = (n - m) / 2;

        cout << " " << f << endl;
    }
    else
    {
        cout << n;
        int f = (m - n) / 2;

        cout << " " << f << endl;
    }

    return 0;
}