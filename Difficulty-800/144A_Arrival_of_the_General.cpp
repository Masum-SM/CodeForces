#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int small = arr[0];
    int sm_idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= small)
        {
            small = arr[i];
            sm_idx = i;
        }
    }

    int large = 0;
    int lrg_idx = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
            lrg_idx = i;
        }
    }
    int count = 0;
    for (int i = sm_idx; i < n - 1; i++)
    {
        swap(arr[i], arr[i + 1]);
        count++;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == large)
        {

            lrg_idx = i;
            break;
        }
    }
    for (int i = lrg_idx; i > 0; i--)
    {
        swap(arr[i], arr[i - 1]);
        count++;
    }
    cout << count;
    return 0;
}
