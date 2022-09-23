#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str1 = "I hate", str2 = " that ", str3 = "I love";
    string full = "";
    for (int i = 1; i <n+1; i++)
    {
        if(i % 2 == 0){
            full += str3;
        }else{
            full += str1;
        }
        if(i<n){
            full += str2;
        }

    }
    full += " it";
    cout<<full<<endl;
    return 0;
}