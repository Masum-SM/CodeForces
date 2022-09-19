#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 0, s = 0;
    cin>>n;
    int i = 5;
    while (i > 0)
    {
        if (n == s)
        {
            cout << c << endl;
            break;
        }
        s += i;
        c++;
        if (s > n)
        {
            s -= i;
            i--;
            c--;
        }
    }
    

    return 0;
}