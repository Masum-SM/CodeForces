#include<bits/stdc++.h>

using namespace std;


int main(){
    string str;
    getline(cin,str);
    int n = str.length();
    int arr[26] = {0};
    int count = 0;
    for(int i = 1; i < n-1 ; i++){
        if(str[i]>=97 && str[i]<=123){
            arr[str[i]-97]++;
        }
    }
    for(int i = 0 ; i < 26 ; i++){
        if(arr[i]>0){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}