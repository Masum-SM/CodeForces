#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    for(int i = 0 ; i<str.length(); i++){
        str[0] = toupper(str[0]);
        cout<<str[i];
    }

    return 0;
}