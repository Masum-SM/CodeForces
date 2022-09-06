#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin >> number;
    int arr[number];
    int count = 0;
    while (number--)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        int s = 0;
        for(int i = 0 ; i<3 ;i++){
            s += arr[i];
        }
        if(s >=2){
            count++;
        }
        
    }
    cout<<count<<endl;

    return 0;
}