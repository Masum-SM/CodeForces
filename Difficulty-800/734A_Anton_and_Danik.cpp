#include<bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    char str[n];
    int anton = 0, danik = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>str[i];
        if(str[i] == 'A') anton++;
        else danik++;
    }
    if(anton>danik) cout<<"Anton"<<endl;
    else if(anton<danik) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;
}