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
        int c = 0;
        for(int i = 0 ; i<3 ;i++){
            if(arr[i] == 1) c++;
        }
        if(c >=2){
            count++;
        }
        
    }
    cout<<count<<endl;

    return 0;
}