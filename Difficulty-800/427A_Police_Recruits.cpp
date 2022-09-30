#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0 && s > 0)
        {
            s = s + arr[i];
        }
        else if (arr[i] > 0)
        {
            s += arr[i];

        }
        else if (arr[i] < 0)
        {
            c++;
        }
    }

    cout << c << endl;

    return 0;
}