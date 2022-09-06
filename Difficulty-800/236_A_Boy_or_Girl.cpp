#include<bits/stdc++.h>

using namespace std;


int main(){
    string str1;
    cin>>str1;
    int count = 0;
    sort(str1.begin(),str1.end());
    for(int i = 0 ; i < str1.length(); i++){
        if(str1[i] != str1[i+1])count++;
    }
    if(count % 2 == 0)
        cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;


    return 0;
}
