#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 1;
    cin >> n;
    string str = "";
    for (int i = 0; i < n; i++)
    {
        char a, b;
        cin >> a >> b;
        str += a;
        str +=b;
    }
    for(int i = 0 ; i < str.length() ; i++){
        if(str[i] == str[i+1]){
            c++;
        }
    }
    cout<<c<<endl;
    

    return 0;
}