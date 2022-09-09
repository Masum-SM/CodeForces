#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, val = 0;
    cin >> num;
    string arr;
    for (int i = 0; i < num; i++)
    {
        cin >> arr;
        if (arr[0] == '+' || arr[1] == '+' || arr[2] == '+')
        {
            val++;
        }
        else
        {
            val--;
        }
    }

    cout << val << endl;

    return 0;
}