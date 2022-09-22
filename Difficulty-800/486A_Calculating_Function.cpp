#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long mid = n / 2;
    if(n % 2 == 0){
        cout<<mid<<endl;
    }
    else{
        cout<<-mid-1<<endl;
    }

    return 0;
}