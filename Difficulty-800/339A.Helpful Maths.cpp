#include<bits/stdc++.h>

using namespace std;


int main(){
    string str, str2="";
    cin>>str;
    for(int i = 0 ; i < str.length() ; i++){
        if(str[i]>='1' && str[i]<='9'){
            str2 += str[i];
        }
    }
    sort(str2.begin(),str2.end());
    cout<<str2[0];
    for(int i = 1 ; i < str2.length() ; i++){
        cout<<"+"<<str2[i];
    }
    
    


    return 0;
}